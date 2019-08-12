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
            typedef SlopeHeuristicSolver copy_type;

            SlopeHeuristicSolver();
            SlopeHeuristicSolver(const SlopeHeuristicSolver& solver);
            virtual ~SlopeHeuristicSolver();

            virtual Eigen::VectorXd operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const = 0;

            linalg::solver_type get_solver() const;
            void set_solver(const linalg::solver_type& solver);

            virtual std::unique_ptr< copy_type > copy() const = 0;

        protected:
            linalg::solver_type solver;
    };

    struct STATISKIT_CORE_API SlopeHeuristicOLSSolver : PolymorphicCopy<SlopeHeuristicOLSSolver, SlopeHeuristicSolver>
    {
        SlopeHeuristicOLSSolver();
        SlopeHeuristicOLSSolver(const SlopeHeuristicOLSSolver& solver);

        virtual Eigen::VectorXd operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const; 
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
            double epsilon;
            unsigned int maxits;

            virtual void update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const = 0;
    };

    class STATISKIT_CORE_API SlopeHeuristicHuberSolver : public PolymorphicCopy<SlopeHeuristicHuberSolver, SlopeHeuristicIWLSSolver>
    {
        public:
            SlopeHeuristicHuberSolver();
            SlopeHeuristicHuberSolver(const SlopeHeuristicHuberSolver& shs);

            const double& get_k() const;
            void set_k(const double& k);

        protected:
            double k;

            virtual void update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const;
    };

    class STATISKIT_CORE_API SlopeHeuristicBiSquareSolver : public PolymorphicCopy<SlopeHeuristicBiSquareSolver, SlopeHeuristicIWLSSolver>
    {
         public:
            SlopeHeuristicBiSquareSolver();
            SlopeHeuristicBiSquareSolver(const SlopeHeuristicBiSquareSolver& shs);

            const double& get_k() const;
            void set_k(const double& k);
         
         protected:
            double k;

            virtual void update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const;
    };

    class SlopeHeuristic;

    struct STATISKIT_CORE_API SlopeHeuristicSelector
    { 
        typedef SlopeHeuristicSelector copy_type;

        SlopeHeuristicSelector() = default;
        SlopeHeuristicSelector(const SlopeHeuristicSelector& selector) = default;
        virtual ~SlopeHeuristicSelector() = default;

        virtual Index operator() (const SlopeHeuristic& sh) const = 0;

        virtual std::unique_ptr< copy_type > copy() const = 0; 
    };

    struct STATISKIT_CORE_API SlopeHeuristicMaximalSelector : PolymorphicCopy<SlopeHeuristicMaximalSelector, SlopeHeuristicSelector>
    { 
        using PolymorphicCopy<SlopeHeuristicMaximalSelector, SlopeHeuristicSelector>::PolymorphicCopy;

        virtual Index operator() (const SlopeHeuristic& sh) const; 
    };

    class STATISKIT_CORE_API SlopeHeuristicSuperiorSelector : public PolymorphicCopy<SlopeHeuristicSuperiorSelector, SlopeHeuristicSelector>
    {
        public:
            SlopeHeuristicSuperiorSelector();
            SlopeHeuristicSuperiorSelector(const SlopeHeuristicSuperiorSelector& selector);
            
            virtual Index operator() (const SlopeHeuristic& sh) const;

            const double& get_threshold() const;
            void set_threshold(const double& threshold);

        protected:
            double threshold;
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
            std::vector< double > penshapes;
            std::vector< double > scores;
            std::vector< double > intercepts;
            std::vector< double > slopes;
            std::vector< Index > selected;
            SlopeHeuristicSolver* solver;
            SlopeHeuristicSelector* selector;

            void finalize();
    };
}