

#ifndef BUILDERABSTRACT_HH_
#define BUILDERABSTRACT_HH_

#include <istream>
#include "OptPondSolver.hh"

class BuilderAbstract {

public:

	BuilderAbstract(std::istream& entry);

	virtual void Initialize() = 0;

	virtual OptPondSolver * release(void) const = 0;

	virtual ~BuilderAbstract();

protected:

	std::istream& _entry;

};


#endif
