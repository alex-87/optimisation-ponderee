
#include "include/OptPondSolver.hh"
#include "include/ConstraintAbstract.hh"

OptPondSolver::OptPondSolver() {

}

void OptPondSolver::addConstraint(const ConstraintAbstract& constraint) {
	constraint.activeConstraint( *this );
}

void OptPondSolver::branchement() {
	Gecode::branch(*this, _sol, Gecode::INT_VAR_SIZE_MIN(), Gecode::INT_VAL_SPLIT_MIN());
}

OptPondSolver::OptPondSolver(bool share, OptPondSolver& optPondSolver) : Gecode::Space(share, optPondSolver) {
	_sol.update(*this, share, optPondSolver._sol);
}

Gecode::Space * OptPondSolver::copy(bool share) {
	return new OptPondSolver(share, *this);
}

OptPondSolver::~OptPondSolver() {

}
