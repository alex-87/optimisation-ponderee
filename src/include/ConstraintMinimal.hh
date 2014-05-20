

#ifndef CONSTRAINTMINIMAL_HH_
#define CONSTRAINTMINIMAL_HH_

#include "ConstraintAbstract.hh"

class ConstraintMinimal : public ConstraintAbstract {

public:

	ConstraintMinimal();

	virtual void activeConstraint(const OptPondSolver& optPondSolver) const = 0;

protected:

};


#endif
