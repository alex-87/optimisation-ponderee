

#ifndef BUILDER_HH_
#define BUILDER_HH_

#include "BuilderAbstract.hh"

class Builder : public BuilderAbstract {

public:

	Builder();

	void Initialize();

	OptPondSolver& release() const;

	~Builder();

protected:

	OptPondSolver * _optPondSolver;

};


#endif
