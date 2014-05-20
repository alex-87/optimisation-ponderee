

#ifndef CONSTRAINTABSTRACT_HH_
#define CONSTRAINTABSTRACT_HH_

class OptPondSolver;

class ConstraintAbstract {

public:

	ConstraintAbstract();

	virtual void activeConstraint(const OptPondSolver& optPondSolver) const = 0;

	virtual ~ConstraintAbstract();

protected:

};



#endif
