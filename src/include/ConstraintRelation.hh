
#ifndef CONSTRAINTRELATION_HH
#define CONSTRAINTRELATION_HH

#include <vector>

#include "ConstraintAbstract.hh"

class ConstraintRelation : public ConstraintAbstract {

public:

	ConstraintRelation(const std::vector<int>& baseList,
					   const std::vector<int>& coefficientList,
					   const int& totalCoefficient);

	void activeConstraint(OptPondSolver& optPondSolver);

protected:

	const int&              _totalCoefficient;

	const std::vector<int>& _baseList;

	const std::vector<int>& _coefficientList;

};


#endif
