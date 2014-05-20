
#include <iostream>

#include "include/OptPondSolver.hh"
#include "include/ConstraintAbstract.hh"

OptPondSolver::OptPondSolver(int nbrElements) :
	_sol(*this, nbrElements, 0, 4) {

	_nbrElements = nbrElements;

}

void OptPondSolver::addConstraint(ConstraintAbstract& constraint) {
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

std::vector<int>& OptPondSolver::lireSolution() const {

	/*
	for(int i=0; i<_sol.size(); i++) {
		std::cout << _sol[i] << std::endl;
	}*/

	std::vector<int> * v = new std::vector<int>();
	for(int i=0; i < _sol.size(); i++)
		v->push_back( _sol[i].val() );

	return *v;

}

OptPondSolver::~OptPondSolver() {

}
