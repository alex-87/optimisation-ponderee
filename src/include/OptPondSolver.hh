
#ifndef OPTPONDSOLVER_HH_
#define OPTPONDSOLVER_HH_

#include <vector>
#include <gecode/int.hh>
#include <gecode/driver.hh>
#include <gecode/search.hh>

#include "ConstraintAbstract.hh"

class OptPondSolver : public Gecode::Space {

public:

	OptPondSolver();

	OptPondSolver(bool share, OptPondSolver& optPondSolver);

	void addConstraint(const ConstraintAbstract& constraint);

	void branchement();

	virtual Gecode::Space * copy(bool share);

	~OptPondSolver();

protected:

	Gecode::IntVarArray _sol;

};


#endif /* OPTPONDSOLVER_HH_ */
