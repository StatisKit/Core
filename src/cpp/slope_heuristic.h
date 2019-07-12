#pragma once

#include <map>
#include <memory>
#include <set>

#include <statiskit/linalg/Eigen.h>

#include "base.h"

namespace statiskit
{
    class STATISKIT_CORE_API SlopeHeuristicSolver
    { 
        public:
            SlopeHeuristicSolver();
            SlopeHeuristicSolver(const SlopeHeuristicSolver& solver);
            virtual ~SlopeHeuristicSolver();

            virtual Eigen::VectorXd operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const = 0;

            linalg::solver_type get_solver() const;
            void set_solver(const linalg::solver_type& solver);

            virtual std::unique_ptr< SlopeHeuristicSolver > copy() const = 0;

        protected:
            linalg::solver_type _solver;
    };

    struct STATISKIT_CORE_API SlopeHeuristicOLSSolver : SlopeHeuristicSolver
    {
        SlopeHeuristicOLSSolver();
        SlopeHeuristicOLSSolver(const SlopeHeuristicOLSSolver& solver);

        virtual Eigen::VectorXd operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const; 

        virtual std::unique_ptr< SlopeHeuristicSolver > copy() const;
    };

    class STATISKIT_CORE_API SlopeHeuristicIWLSSolver : public SlopeHeuristicSolver
    {
        public:
            SlopeHeuristicIWLSSolver();
            SlopeHeuristicIWLSSolver(const SlopeHeuristicIWLSSolver& shs);

            virtual Eigen::VectorXd operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const;

            const double& get_epsilon() const;
            void set_epsilon(const double& epsilon);

            const unsigned int& get_maxits() const;
            void set_maxits(const unsigned int& maxits);

        protected:
            double _epsilon;
            unsigned int _maxits;

            virtual void update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const = 0;
    };

    class STATISKIT_CORE_API SlopeHeuristicHuberSolver : public SlopeHeuristicIWLSSolver
    {
        public:
            SlopeHeuristicHuberSolver();
            SlopeHeuristicHuberSolver(const SlopeHeuristicHuberSolver& shs);

            virtual std::unique_ptr< SlopeHeuristicSolver > copy() const;

            const double& get_k() const;
            void set_k(const double& k);

        protected:
            double _k;

            virtual void update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const;
    };

    class STATISKIT_CORE_API SlopeHeuristicBiSquareSolver : public SlopeHeuristicIWLSSolver
    {
         public:
            SlopeHeuristicBiSquareSolver();
            SlopeHeuristicBiSquareSolver(const SlopeHeuristicBiSquareSolver& shs);

            virtual std::unique_ptr< SlopeHeuristicSolver > copy() const;

            const double& get_k() const;
            void set_k(const double& k);
         
         protected:
            double _k;

            virtual void update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const;
    };

    class SlopeHeuristic;

    struct STATISKIT_CORE_API SlopeHeuristicSelector
    { 
        virtual ~SlopeHeuristicSelector();

        virtual Index operator() (const SlopeHeuristic& sh) const = 0;

        virtual std::unique_ptr< SlopeHeuristicSelector > copy() const = 0; 
    };

    struct STATISKIT_CORE_API SlopeHeuristicMaximalSelector : SlopeHeuristicSelector
    { 
        SlopeHeuristicMaximalSelector();
        SlopeHeuristicMaximalSelector(const SlopeHeuristicMaximalSelector& selector);

        virtual Index operator() (const SlopeHeuristic& sh) const; 

        virtual std::unique_ptr< SlopeHeuristicSelector > copy() const; 
    };

    class STATISKIT_CORE_API SlopeHeuristicSuperiorSelector : public SlopeHeuristicSelector
    {
        public:
            SlopeHeuristicSuperiorSelector();
            SlopeHeuristicSuperiorSelector(const SlopeHeuristicSuperiorSelector& selector);

            virtual Index operator() (const SlopeHeuristic& sh) const;

            virtual std::unique_ptr< SlopeHeuristicSelector > copy() const; 

            const double& get_threshold() const;
            void set_threshold(const double& threshold);

        protected:
            double _threshold;
    };

    class STATISKIT_CORE_API SlopeHeuristic
    {
        public:
            SlopeHeuristic();
            SlopeHeuristic(const std::set< double >& penshapes, const std::vector< double >& scores);
            SlopeHeuristic(const std::set< double >& penshapes, const std::vector< double >& scores, const SlopeHeuristicSolver& solver, const SlopeHeuristicSelector& selector);
            SlopeHeuristic(const SlopeHeuristic& sh);
            virtual ~SlopeHeuristic();

            Index size() const;

            const double& get_score(const Index& index) const;

            const double& get_penshape(const Index& index) const;

            const double& get_intercept(const Index& index) const;

            const double& get_slope(const Index& index) const;

            const Index& get_selected(const Index& index) const;

            double compute_r_squared(const Index& index) const;

            SlopeHeuristicSolver* get_solver();
            void set_solver(const SlopeHeuristicSolver& solver);

            SlopeHeuristicSelector* get_selector();
            void set_selector(const SlopeHeuristicSelector& _selector);
            
        protected:
            std::vector< double > _penshapes;
            std::vector< double > _scores;
            std::vector< double > _intercepts;
            std::vector< double > _slopes;
            std::vector< Index > _selected;
            SlopeHeuristicSolver* _solver;
            SlopeHeuristicSelector* _selector;

            void finalize();
    };

    template<class E> class SlopeHeuristicSelection : public SlopeHeuristic, public E
    {
        public:
            SlopeHeuristicSelection(const typename E::data_type* data);
            SlopeHeuristicSelection(const SlopeHeuristicSelection< E >& she);
            virtual ~SlopeHeuristicSelection();

            virtual typename E::estimated_type const * get_estimated() const;

            const typename E::estimated_type* get_proposal(const Index& index) const;

            const typename E::data_type* get_data() const;

            
        protected:
            typename E::data_type* _data;
            std::vector< typename E::estimated_type* > _proposals;

            void add(const double& penshape, const double& score, typename E::estimated_type* model);
    };
}

#include "slope_heuristic.hpp"