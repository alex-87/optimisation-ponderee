
#ifndef OPTPONDSOLVER_HH_
#define OPTPONDSOLVER_HH_

#include <vector>
#include <gecode/int.hh>
#include <gecode/driver.hh>
#include <gecode/search.hh>

//#include "ConstraintAbstract.hh"
class ConstraintAbstract;

class OptPondSolver : public Gecode::Space {

public:

	OptPondSolver(int nbrElements);

	OptPondSolver(bool share, OptPondSolver& optPondSolver);

	void addConstraint(ConstraintAbstract& constraint);

	void branchement();

	virtual Gecode::Space * copy(bool share);

	~OptPondSolver();

	void lireSolution(void) const;

public:

	int                 _nbrElements;

	Gecode::IntVarArray _sol;

};


#endif /* OPTPONDSOLVER_HH_ */
