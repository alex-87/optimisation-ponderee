
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

	void addConstraint(const ConstraintAbstract& constraint);

	~OptPondSolver();

protected:

	std::vector<ConstraintAbstract> listConstraint;

};


#endif /* OPTPONDSOLVER_HH_ */
