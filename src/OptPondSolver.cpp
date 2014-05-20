
#include <iostream>

#include "include/OptPondSolver.hh"
#include "include/ConstraintAbstract.hh"

OptPondSolver::OptPondSolver(int nbrElements) :
	_sol(*this, nbrElements, 0, 20) {

	_nbrElements = nbrElements;

	std::cout << "Constructeur OptPondSolver: " << _nbrElements << std::endl;

}

void OptPondSolver::addConstraint(ConstraintAbstract& constraint) {
	std::cout << "AddConstraint: " << _nbrElements << std::endl;
	constraint.activeConstraint( *this );
}

void OptPondSolver::branchement() {
	Gecode::branch(*this, _sol, Gecode::INT_VAR_SIZE_MIN(), Gecode::INT_VAL_SPLIT_MIN());
}

OptPondSolver::OptPondSolver(bool share, OptPondSolver& optPondSolver) :
	Gecode::Space(share, optPondSolver) {

	_nbrElements = optPondSolver._nbrElements;
	_sol.update(*this, share, optPondSolver._sol);
}

Gecode::Space * OptPondSolver::copy(bool share) {

	OptPondSolver * opt = new OptPondSolver(share, *this);
	opt->_nbrElements = _nbrElements;

	return opt;
}

void OptPondSolver::lireSolution() const {

	for(int i=0; i<_sol.size(); i++) {
		std::cout << _sol[i] << std::endl;
	}

}

OptPondSolver::~OptPondSolver() {

}
