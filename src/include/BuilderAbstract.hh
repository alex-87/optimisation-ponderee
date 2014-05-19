

#ifndef BUILDERABSTRACT_HH_
#define BUILDERABSTRACT_HH_

#include <istream>
#include "OptPondSolver.hh"

class BuilderAbstract {

public:

	virtual void Initialize(std::istream& entry) = 0;

	virtual OptPondSolver& release(void);

	virtual ~BuilderAbstract();

protected:

	std::istream& _entry;

};


#endif
