#include "slope_heuristic.h"

namespace statiskit
{
    SlopeHeuristicSolver::SlopeHeuristicSolver()
    {
        this->solver = linalg::llt;
    }

    SlopeHeuristicSolver::SlopeHeuristicSolver(const SlopeHeuristicSolver& solver)
    {
        this->solver = solver.solver;
    }

    SlopeHeuristicSolver::~SlopeHeuristicSolver()
    {}

    linalg::solver_type SlopeHeuristicSolver::get_solver() const
    {
        return this->solver;
    }

    void SlopeHeuristicSolver::set_solver(const linalg::solver_type& solver)
    {
        this->solver = solver;
    }

    SlopeHeuristicOLSSolver::SlopeHeuristicOLSSolver() : PolymorphicCopy<SlopeHeuristicOLSSolver, SlopeHeuristicSolver>()
    {}

    SlopeHeuristicOLSSolver::SlopeHeuristicOLSSolver(const SlopeHeuristicOLSSolver& solver) : PolymorphicCopy<SlopeHeuristicOLSSolver, SlopeHeuristicSolver>(solver)
    {}

    Eigen::VectorXd SlopeHeuristicOLSSolver::operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        return linalg::solve(X.transpose() * X, (X.transpose() * y).eval(), this->solver);
    }

    SlopeHeuristicIWLSSolver::SlopeHeuristicIWLSSolver() : SlopeHeuristicSolver()
    { 
        this->epsilon = 1e-6;
        this->maxits = 10;
    }

    SlopeHeuristicIWLSSolver::SlopeHeuristicIWLSSolver(const SlopeHeuristicIWLSSolver& shs) : SlopeHeuristicSolver(shs)
    { 
        this->epsilon = shs.epsilon;
        this->maxits = shs.maxits;
    }

    Eigen::VectorXd SlopeHeuristicIWLSSolver::operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        Eigen::MatrixXd W = (Eigen::VectorXd::Ones(y.rows())).asDiagonal();
        Eigen::VectorXd bp, bc = linalg::solve(X.transpose() * X, (X.transpose() * y).eval(), this->solver);
        unsigned int its = 0;
        do {
            bp = bc;
            this->update(bp, W, X, y);
            bc = linalg::solve(X.transpose() * W * X, (X.transpose() * W * y).eval(), this->solver);
            ++its;
        } while((bc - bp).array().square().sqrt().sum() > this->epsilon * bp.array().abs().sum() && its < this->maxits);
        return bc;
    }
    
    const double& SlopeHeuristicIWLSSolver::get_epsilon() const
    {
        return this->epsilon;
    }

    void SlopeHeuristicIWLSSolver::set_epsilon(const double& epsilon)
    { 
        this->epsilon = epsilon;
    }
    
    const unsigned int& SlopeHeuristicIWLSSolver::get_maxits() const
    {
        return this->maxits;
    }

    void SlopeHeuristicIWLSSolver::set_maxits(const unsigned int& maxits)
    {
        this->maxits = maxits;
    }

    SlopeHeuristicHuberSolver::SlopeHeuristicHuberSolver() :  PolymorphicCopy<SlopeHeuristicHuberSolver, SlopeHeuristicIWLSSolver>()
    {
        this->k = 1.345;
    }

    SlopeHeuristicHuberSolver::SlopeHeuristicHuberSolver(const SlopeHeuristicHuberSolver& shs) :  PolymorphicCopy<SlopeHeuristicHuberSolver, SlopeHeuristicIWLSSolver>(shs)
    {
        this->k = shs.k;
    }

    const double& SlopeHeuristicHuberSolver::get_k() const
    {
        return this->k;
    }

    void SlopeHeuristicHuberSolver::set_k(const double& k)
    {
        this->k = k;
    }

    void SlopeHeuristicHuberSolver::update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        Eigen::VectorXd errors = y - X * beta;
        double sigma = this->k * errors.norm() / sqrt(y.size());
        errors = errors.cwiseAbs();
        for (Index index = 0, max_index = y.size(); index < max_index; ++index) {
            if (errors(index) <= sigma) {
                W(index, index) = 1;
            } else {
                W(index, index) = sigma / errors(index);
            }
        }
    }

    SlopeHeuristicBiSquareSolver::SlopeHeuristicBiSquareSolver() :  PolymorphicCopy<SlopeHeuristicBiSquareSolver, SlopeHeuristicIWLSSolver>()
    {
        this->k = 4.685;
    }

    SlopeHeuristicBiSquareSolver::SlopeHeuristicBiSquareSolver(const SlopeHeuristicBiSquareSolver& shs) :  PolymorphicCopy<SlopeHeuristicBiSquareSolver, SlopeHeuristicIWLSSolver>(shs)
    {
        this->k = shs.k;
    }

    const double& SlopeHeuristicBiSquareSolver::get_k() const
    {
        return this->k;
    }

    void SlopeHeuristicBiSquareSolver::set_k(const double& k)
    {
        this->k = k;
    }

    void SlopeHeuristicBiSquareSolver::update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        Eigen::VectorXd errors = y - X * beta;
        double sigma = this->k * errors.norm() / sqrt(y.size());
        errors = errors.cwiseAbs();
        for( Index index = 0, max_index = y.size(); index < max_index; ++index) {
            if(errors(index) <= sigma) {
                W(index, index) = pow(1 - pow(errors(index) / sigma, 2), 2);
            } else {
                W(index, index) = 0.;
            }
        }
    }

    Index SlopeHeuristicMaximalSelector::operator() (const SlopeHeuristic& sh) const
    {
        Index index, lower = 0, upper = 1, max_index = sh.size();
        index = max_index;
        Index length = 0;
        while (upper < max_index) {
            while (upper < max_index && sh.get_selected(lower) == sh.get_selected(upper)) {
                ++upper;
            }
            if (upper - lower >= length) {
                length = upper - lower;
                index = lower;
            }
            lower = upper;
            ++upper;
        }
        return index;
    }
    
    SlopeHeuristicSuperiorSelector::SlopeHeuristicSuperiorSelector()
    {
        this->threshold = .20;
    }

    SlopeHeuristicSuperiorSelector::SlopeHeuristicSuperiorSelector(const SlopeHeuristicSuperiorSelector& selector)
    {
        this->threshold = selector.threshold;
    }

    Index SlopeHeuristicSuperiorSelector::operator() (const SlopeHeuristic& sh) const
    {
        Index index, lower = 0, upper = 1, max_index = sh.size();
        index = max_index;
        while (index == max_index && upper < max_index) {
            while (upper < max_index && sh.get_selected(lower) == sh.get_selected(upper)) {
                ++upper;
            }
            if (upper - lower > int(this->threshold * max_index)) {
                index = lower;
            }
            lower = upper;
            ++upper;
        }
        if (index == max_index) {
            lower = 0, upper = 1;
            Index length = 0;
            while (upper < max_index) {
                while (upper < max_index && sh.get_selected(lower) == sh.get_selected(upper)) {
                    ++upper;
                }
                if (upper - lower > length) {
                    length = upper - lower;
                    index = lower;
                }
                lower = upper;
                ++upper;
            }
        }
        return index;
    }

    const double& SlopeHeuristicSuperiorSelector::get_threshold() const
    {
        return this->threshold;
    }

    void SlopeHeuristicSuperiorSelector::set_threshold(const double& threshold)
    {
        this->threshold = threshold;
    }

    SlopeHeuristic::SlopeHeuristic()
    {
        this->penshapes.clear();
        this->scores.clear();
        this->intercepts.clear();
        this->slopes.clear();
        this->selected.clear();
        this->solver = new SlopeHeuristicHuberSolver();
        this->selector = new SlopeHeuristicSuperiorSelector();
    }

    SlopeHeuristic::SlopeHeuristic(const std::set< double >& penshapes, const std::vector< double >& scores)
    {
        this->penshapes = std::vector< double >(penshapes.cbegin(), penshapes.cend());
        if (scores.size() != penshapes.size()) {
            throw size_error("scores", scores.size(), penshapes.size());
        }
        this->scores = scores;
        this->solver = new SlopeHeuristicBiSquareSolver();
        this->selector = new SlopeHeuristicSuperiorSelector();
        this->finalize();
    }

    SlopeHeuristic::SlopeHeuristic(const std::set< double >& penshapes, const std::vector< double >& scores, const SlopeHeuristicSolver& solver, const SlopeHeuristicSelector& selector)
    {
        this->penshapes = std::vector< double >(penshapes.cbegin(), penshapes.cend());
        if (scores.size() != penshapes.size()) {
            throw size_error("scores", scores.size(), penshapes.size());
        }
        this->scores = scores;
        this->solver = solver.copy().release();
        this->selector = selector.copy().release();
        this->finalize();
    }

    SlopeHeuristic::~SlopeHeuristic()
    {
        if(this->solver)
        {
            delete this->solver;
            this->solver = nullptr;
        }
        if(this->selector)
        {
            delete this->selector;
            this->selector = nullptr;
        }
    }

    SlopeHeuristic::SlopeHeuristic(const SlopeHeuristic& sh)
    {
        this->penshapes = sh.penshapes;
        this->scores = sh.scores;
        this->intercepts = sh.intercepts;
        this->slopes = sh.slopes;
        this->selected = sh.selected;
        this->solver = sh.solver->copy().release();
        this->selector = sh.selector->copy().release();
    }

    Index SlopeHeuristic::size() const
    {
        return this->penshapes.size();
    }

    const double& SlopeHeuristic::get_score(const Index& index) const
    {
        return this->scores[index];
    }

    const double& SlopeHeuristic::get_penshape(const Index& index) const
    {
        return this->penshapes[index];
    }

    const double& SlopeHeuristic::get_intercept(const Index& index) const
    {
        return this->intercepts[index];
    }

    const double& SlopeHeuristic::get_slope(const Index& index) const
    {
        return this->slopes[index];
    }

    const Index& SlopeHeuristic::get_selected(const Index& index) const
    {
        return this->selected[index];
    }

    double SlopeHeuristic::compute_r_squared(const Index& index) const
    { 
        Index max_index = size();
        Eigen::MatrixXd X(index, 2);
        Eigen::VectorXd y(index), beta(2);
        beta(0) = this->intercepts[index];
        beta(1) = this->slopes[index];
        for (Index shift = 0; shift < index; ++shift) { 
            X(shift, 0) = 1;
            X(shift, 1) = this->penshapes[max_index - shift - 1];
            y(shift) = this->scores[max_index - shift - 1]; 
        }
        return 1. - (y - X * beta).squaredNorm() / (y.array() - y.mean()).matrix().squaredNorm();
    }

    SlopeHeuristicSolver* SlopeHeuristic::get_solver()
    {
        return this->solver;
    }

    void SlopeHeuristic::set_solver(const SlopeHeuristicSolver& solver)
    { 
        this->solver = solver.copy().release();
        this->finalize();
    }

    SlopeHeuristicSelector* SlopeHeuristic::get_selector()
    {
        return this->selector;
    }

    void SlopeHeuristic::set_selector(const SlopeHeuristicSelector& selector)
    {
        this->selector = selector.copy().release();
    }

    void SlopeHeuristic::finalize() 
    {
        this->intercepts = std::vector< double >(this->size(), std::numeric_limits< double >::quiet_NaN());
        this->slopes = std::vector< double >(this->size(), std::numeric_limits< double >::quiet_NaN());
        for (Index index = 2, max_index = this->size(); index < max_index; ++index) {
            Eigen::MatrixXd X(index, 2);
            Eigen::VectorXd y(index);
            for (Index shift = 0; shift < index; ++shift) {
                X(shift, 0) = 1;
                X(shift, 1) = this->penshapes[max_index - shift - 1];
                y(shift) = this->scores[max_index - shift - 1];
            }
            try {
                Eigen::VectorXd beta = (*this->solver)(X, y);
                this->intercepts[index - 1] = beta(0);
                this->slopes[index - 1] = beta(1);
            } catch(const std::exception& error) {
            }
        }
        this->selected = std::vector< Index >(this->slopes.size());
        for (Index index = 1, max_index = size(); index < max_index; ++index) {
            std::pair< double, Index > max = std::make_pair(-1*std::numeric_limits< double >::infinity(), this->size());
            if (boost::math::isfinite(this->slopes[index])) {
                for (Index shift = 0; shift < max_index; ++shift) {
                    double score = this->scores[shift] - 2 * this->slopes[index] * this->penshapes[shift];                        
                    if(boost::math::isfinite(score) && score > max.first) {
                        max.first = score;
                        max.second = shift;
                    }
                }
            }
            this->selected[index] = max.second;
        }
    }
}
