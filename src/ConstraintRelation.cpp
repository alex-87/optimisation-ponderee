
#include "include/ConstraintRelation.hh"

ConstraintRelation::ConstraintRelation(const std::vector<int>& baseList, const std::vector<int>& coefficientList, const int& coeffRest, const int& totalCoefficient) :
	_baseList( baseList ),
	_coefficientList(coefficientList),
	_coeffRest( coeffRest ),
	_totalCoefficient( totalCoefficient ) {

}

void ConstraintRelation::activeConstraint(OptPondSolver& optPondSolver) {

	int sum = 0, sumCoeff = 0;
	Gecode::IntArgs c( optPondSolver._nbrElements );

	for(int i=0; i<optPondSolver._nbrElements; i++) {
		sum      += (_baseList[i] * _coefficientList[i]);
		sumCoeff += _coefficientList[i];
		c[i]      = _coefficientList[i];
	};

	sumCoeff += _coeffRest;
	sum += _totalCoefficient;

	Gecode::linear(optPondSolver, c, optPondSolver._sol, Gecode::IRT_EQ, (sumCoeff * 10) - sum );

}
