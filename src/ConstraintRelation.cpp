
#include "include/ConstraintRelation.hh"

ConstraintRelation::ConstraintRelation(const std::vector<int>& baseList, const std::vector<int>& coefficientList, const int& totalCoefficient) :
	_totalCoefficient( totalCoefficient ),
	_baseList( baseList ),
	_coefficientList(coefficientList) {

}

void ConstraintRelation::activeConstraint(OptPondSolver& optPondSolver) const {

	int sum = 0;
	Gecode::IntArgs c( _baseList.size() );

	for(unsigned int i=0; i<_baseList.size(); i++) {
		sum += (_baseList[i] * _coefficientList[i]);
		c[i] = _coefficientList[i];
	};

	Gecode::linear(optPondSolver, c, optPondSolver._sol, Gecode::IRT_GQ, (_totalCoefficient - sum) );

}
