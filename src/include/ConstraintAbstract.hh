

#ifndef CONSTRAINTABSTRACT_HH_
#define CONSTRAINTABSTRACT_HH_

#include "OptPondSolver.hh"

class ConstraintAbstract {

public:

	virtual void activeConstraint(OptPondSolver& optPondSolver) const = 0;

	virtual ~ConstraintAbstract();

protected:

};



#endif
