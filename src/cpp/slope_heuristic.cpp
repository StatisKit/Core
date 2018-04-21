#include "slope_heuristic.h"

namespace statiskit
{
    SlopeHeuristicSolver::SlopeHeuristicSolver()
    { _solver = linalg::llt; }

    SlopeHeuristicSolver::SlopeHeuristicSolver(const SlopeHeuristicSolver& solver)
    { _solver = solver._solver; }

    SlopeHeuristicSolver::~SlopeHeuristicSolver()
    {}

    linalg::solver_type SlopeHeuristicSolver::get_solver() const
    { return _solver; }

    void SlopeHeuristicSolver::set_solver(const linalg::solver_type& solver)
    { _solver = solver; }

    SlopeHeuristicOLSSolver::SlopeHeuristicOLSSolver() : SlopeHeuristicSolver()
    {}

    SlopeHeuristicOLSSolver::SlopeHeuristicOLSSolver(const SlopeHeuristicOLSSolver& solver) : SlopeHeuristicSolver(solver)
    {}

    Eigen::VectorXd SlopeHeuristicOLSSolver::operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    { return linalg::solve(X.transpose() * X, (X.transpose() * y).eval(), _solver); }

    std::unique_ptr< SlopeHeuristicSolver > SlopeHeuristicOLSSolver::copy() const
    { return std::make_unique< SlopeHeuristicOLSSolver >(); }

    SlopeHeuristicIWLSSolver::SlopeHeuristicIWLSSolver()
    { 
        _epsilon = 1e-6;
        _maxits = 10;
    }

    SlopeHeuristicIWLSSolver::SlopeHeuristicIWLSSolver(const SlopeHeuristicIWLSSolver& shs)
    { 
        _epsilon = shs._epsilon;
        _maxits = shs._maxits;
    }

    Eigen::VectorXd SlopeHeuristicIWLSSolver::operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        Eigen::MatrixXd W = (Eigen::VectorXd::Ones(y.rows())).asDiagonal();
        Eigen::VectorXd bp, bc = linalg::solve(X.transpose() * X, (X.transpose() * y).eval(), _solver);
        unsigned int its = 0;
        do
        {
            bp = bc;
            update(bp, W, X, y);
            bc = linalg::solve(X.transpose() * W * X, (X.transpose() * W * y).eval(), _solver);
            ++its;
        } while((bc - bp).array().square().sqrt().sum() > _epsilon * bp.array().abs().sum() && its < _maxits);
        return bc;
    }
    
    const double& SlopeHeuristicIWLSSolver::get_epsilon() const
    { return _epsilon; }

    void SlopeHeuristicIWLSSolver::set_epsilon(const double& epsilon)
    { _epsilon = epsilon; }
    
    const unsigned int& SlopeHeuristicIWLSSolver::get_maxits() const
    { return _maxits; }

    void SlopeHeuristicIWLSSolver::set_maxits(const unsigned int& maxits)
    { _maxits = maxits; }

    SlopeHeuristicHuberSolver::SlopeHeuristicHuberSolver() : SlopeHeuristicIWLSSolver()
    { _k = 1.345; }

    SlopeHeuristicHuberSolver::SlopeHeuristicHuberSolver(const SlopeHeuristicHuberSolver& shs) : SlopeHeuristicIWLSSolver(shs)
    { _k = shs._k; }

    std::unique_ptr< SlopeHeuristicSolver > SlopeHeuristicHuberSolver::copy() const
    { return std::make_unique< SlopeHeuristicHuberSolver >(*this); }

    const double& SlopeHeuristicHuberSolver::get_k() const
    { return _k; }

    void SlopeHeuristicHuberSolver::set_k(const double& k)
    { _k = k; }

    void SlopeHeuristicHuberSolver::update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        Eigen::VectorXd errors = y - X * beta;
        double sigma = _k * errors.norm() / sqrt(y.size());
        errors = errors.cwiseAbs();
        for(Index index = 0, max_index = y.size(); index < max_index; ++index)
        {
            if(errors(index) <= sigma)
            { W(index, index) = 1; }
            else
            { W(index, index) = sigma / errors(index); }
        }
    }

    SlopeHeuristicBiSquareSolver::SlopeHeuristicBiSquareSolver() : SlopeHeuristicIWLSSolver()
    { _k = 4.685; }

    SlopeHeuristicBiSquareSolver::SlopeHeuristicBiSquareSolver(const SlopeHeuristicBiSquareSolver& shs) : SlopeHeuristicIWLSSolver(shs)
    { _k = shs._k; }

    std::unique_ptr< SlopeHeuristicSolver > SlopeHeuristicBiSquareSolver::copy() const
    { return std::make_unique< SlopeHeuristicBiSquareSolver >(*this); }

    const double& SlopeHeuristicBiSquareSolver::get_k() const
    { return _k; }

    void SlopeHeuristicBiSquareSolver::set_k(const double& k)
    { _k = k; }

    void SlopeHeuristicBiSquareSolver::update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        Eigen::VectorXd errors = y - X * beta;
        double sigma = _k * errors.norm() / sqrt(y.size());
        errors = errors.cwiseAbs();
        for(Index index = 0, max_index = y.size(); index < max_index; ++index)
        {
            if(errors(index) <= sigma)
            { W(index, index) = pow(1 - pow(errors(index) / sigma, 2), 2); }
            else
            { W(index, index) = 0.; }
        }
    }

    SlopeHeuristicSelector::~SlopeHeuristicSelector()
    {}

    SlopeHeuristicMaximalSelector::SlopeHeuristicMaximalSelector()
    {}

    SlopeHeuristicMaximalSelector::SlopeHeuristicMaximalSelector(const SlopeHeuristicMaximalSelector& selector)
    {}

    Index SlopeHeuristicMaximalSelector::operator() (const SlopeHeuristic& sh) const
    {
        Index index, lower = 0, upper = 1, max_index = sh.size();
        index = max_index;
        Index length = 0;
        while(upper < max_index)
        {
            while(upper < max_index && sh.get_selected(lower) == sh.get_selected(upper))
            { ++upper; }
            if(upper - lower >= length)
            {
                length = upper - lower;
                index = lower;
            }
            lower = upper;
            ++upper;
        }
        return index;
    }

    std::unique_ptr< SlopeHeuristicSelector > SlopeHeuristicMaximalSelector::copy() const
    { return std::make_unique< SlopeHeuristicMaximalSelector >(*this); }

    
    SlopeHeuristicSuperiorSelector::SlopeHeuristicSuperiorSelector()
    { _threshold = .20; }

    SlopeHeuristicSuperiorSelector::SlopeHeuristicSuperiorSelector(const SlopeHeuristicSuperiorSelector& selector)
    { _threshold = selector._threshold; }

    Index SlopeHeuristicSuperiorSelector::operator() (const SlopeHeuristic& sh) const
    {
        Index index, lower = 0, upper = 1, max_index = sh.size();
        index = max_index;
        while(index == max_index && upper < max_index)
        {
            while(upper < max_index && sh.get_selected(lower) == sh.get_selected(upper))
            { ++upper; }
            if(upper - lower > int(_threshold * max_index))
            { index = lower; }
            lower = upper;
            ++upper;
        }
        if(index == max_index)
        {
            lower = 0, upper = 1;
            Index length = 0;
            while(upper < max_index)
            {
                while(upper < max_index && sh.get_selected(lower) == sh.get_selected(upper))
                { ++upper; }
                if(upper - lower > length)
                {
                    length = upper - lower;
                    index = lower;
                }
                lower = upper;
                ++upper;
            }
        }
        return index;
    }

    std::unique_ptr< SlopeHeuristicSelector > SlopeHeuristicSuperiorSelector::copy() const
    { return std::make_unique< SlopeHeuristicSuperiorSelector >(*this); }

    const double& SlopeHeuristicSuperiorSelector::get_threshold() const
    { return _threshold; }

    void SlopeHeuristicSuperiorSelector::set_threshold(const double& threshold)
    { _threshold = threshold; }

    SlopeHeuristic::SlopeHeuristic()
    {
        _penshapes.clear();
        _scores.clear();
        _intercepts.clear();
        _slopes.clear();
        _selected.clear();
        _solver = new SlopeHeuristicHuberSolver();
        _selector = new SlopeHeuristicSuperiorSelector();
    }

    SlopeHeuristic::SlopeHeuristic(const std::set< double >& penshapes, const std::vector< double >& scores)
    {
        _penshapes = std::vector< double >(penshapes.cbegin(), penshapes.cend());
        if(scores.size() != penshapes.size())
        { throw size_error("scores", scores.size(), penshapes.size()); }
        _scores = scores;
        _solver = new SlopeHeuristicBiSquareSolver();
        _selector = new SlopeHeuristicSuperiorSelector();
        finalize();
    }

    SlopeHeuristic::SlopeHeuristic(const std::set< double >& penshapes, const std::vector< double >& scores, const SlopeHeuristicSolver& solver, const SlopeHeuristicSelector& selector)
    {
        _penshapes = std::vector< double >(penshapes.cbegin(), penshapes.cend());
        if(scores.size() != penshapes.size())
        { throw size_error("scores", scores.size(), penshapes.size()); }
        _scores = scores;
        _solver = solver.copy().release();
        _selector = selector.copy().release();
        finalize();
    }

    SlopeHeuristic::~SlopeHeuristic()
    {
        if(_solver)
        {
            delete _solver;
            _solver = nullptr;
        }
        if(_selector)
        {
            delete _selector;
            _selector = nullptr;
        }
    }

    SlopeHeuristic::SlopeHeuristic(const SlopeHeuristic& sh)
    {
        _penshapes = sh._penshapes;
        _scores = sh._scores;
        _intercepts = sh._intercepts;
        _slopes = sh._slopes;
        _selected = sh._selected;
        _solver = sh._solver->copy().release();
        _selector = sh._selector->copy().release();
    }

    Index SlopeHeuristic::size() const
    { return _penshapes.size(); }

    const double& SlopeHeuristic::get_score(const Index& index) const
    { return _scores[index]; }

    const double& SlopeHeuristic::get_penshape(const Index& index) const
    { return _penshapes[index]; }

    const double& SlopeHeuristic::get_intercept(const Index& index) const
    { return _intercepts[index]; }

    const double& SlopeHeuristic::get_slope(const Index& index) const
    { return _slopes[index]; }

    const Index& SlopeHeuristic::get_selected(const Index& index) const
    { return _selected[index]; }

    double SlopeHeuristic::compute_r_squared(const Index& index) const
    { 
        Index max_index = size();
        Eigen::MatrixXd X(index, 2);
        Eigen::VectorXd y(index), beta(2);
        beta(0) = _intercepts[index];
        beta(1) = _slopes[index];
        for(Index shift = 0; shift < index; ++shift)
        { 
            X(shift, 0) = 1;
            X(shift, 1) = _penshapes[max_index - shift - 1];
            y(shift) = _scores[max_index - shift - 1]; 
        }
        return 1. - (y - X * beta).squaredNorm() / (y.array() - y.mean()).matrix().squaredNorm();
    }

    SlopeHeuristicSolver* SlopeHeuristic::get_solver()
    { return _solver; }

    void SlopeHeuristic::set_solver(const SlopeHeuristicSolver& solver)
    { 
        _solver = solver.copy().release();
        finalize();
    }

    SlopeHeuristicSelector* SlopeHeuristic::get_selector()
    { return _selector; }

    void SlopeHeuristic::set_selector(const SlopeHeuristicSelector& selector)
    { _selector = selector.copy().release(); }

    void SlopeHeuristic::finalize() 
    {
        _intercepts = std::vector< double >(size(), std::numeric_limits< double >::quiet_NaN());
        _slopes = std::vector< double >(size(), std::numeric_limits< double >::quiet_NaN());
        for(Index index = 2, max_index = size(); index < max_index; ++index)
        {
            Eigen::MatrixXd X(index, 2);
            Eigen::VectorXd y(index);
            for(Index shift = 0; shift < index; ++shift)
            {
                X(shift, 0) = 1;
                X(shift, 1) = _penshapes[max_index - shift - 1];
                y(shift) = _scores[max_index - shift - 1];
            }
            try
            {
                Eigen::VectorXd beta = (*_solver)(X, y);
                _intercepts[index - 1] = beta(0);
                _slopes[index - 1] = beta(1);
            }
            catch(const std::exception& error)
            {}
        }
        _selected = std::vector< Index >(_slopes.size());
        for(Index index = 1, max_index = size(); index < max_index; ++index)
        {
            std::pair< double, Index > max = std::make_pair(-1*std::numeric_limits< double >::infinity(), size());
            if(boost::math::isfinite(_slopes[index]))
            {
                for(Index shift = 0; shift < max_index; ++shift)
                {
                    double score = _scores[shift] - 2 * _slopes[index] * _penshapes[shift];                        
                    if(boost::math::isfinite(score) && score > max.first)
                    {
                        max.first = score;
                        max.second = shift;
                    }
                }
            }
            _selected[index] = max.second;
        }
    }
}
