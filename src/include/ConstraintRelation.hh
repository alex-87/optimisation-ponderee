
#ifndef CONSTRAINTRELATION_HH
#define CONSTRAINTRELATION_HH

#include "ConstraintAbstract.hh"

class ConstraintRelation : public ConstraintAbstract {

public:

	ConstraintRelation();

	virtual void activeConstraint(const OptPondSolver& optPondSolver) const = 0;

protected:

};


#endif
