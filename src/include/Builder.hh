

#ifndef BUILDER_HH_
#define BUILDER_HH_

#include "BuilderAbstract.hh"

class Builder : public BuilderAbstract {

public:

	Builder(const std::istream& entry);

	void Initialize();

	OptPondSolver& release() const;

	~Builder();

protected:

	OptPondSolver * _optPondSolver;

};


#endif
