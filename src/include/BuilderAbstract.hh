

#ifndef BUILDERABSTRACT_HH_
#define BUILDERABSTRACT_HH_

#include <istream>
#include "OptPondSolver.hh"

class BuilderAbstract {

public:

	BuilderAbstract(const std::istream& entry);

	virtual void Initialize() = 0;

	virtual OptPondSolver& release(void) const = 0;

	virtual ~BuilderAbstract();

protected:

	const std::istream& _entry;

};


#endif
