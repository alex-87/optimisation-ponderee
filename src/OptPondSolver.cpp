
#include "include/OptPondSolver.hh"

OptPondSolver::OptPondSolver() {

}

OptPondSolver::OptPondSolver(bool share, OptPondSolver& optPondSolver) : Gecode::Space(share, optPondSolver) {
	sol.update(*this, share, optPondSolver.sol);
}

Gecode::Space * OptPondSolver::copy(bool share) {
	return new OptPondSolver(share, *this);
}

OptPondSolver::~OptPondSolver() {

}
