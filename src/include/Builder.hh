

#ifndef BUILDER_HH_
#define BUILDER_HH_

#include "BuilderAbstract.hh"

class Builder : public BuilderAbstract {

public:

	Builder(std::istream& entry);

	void Initialize();

	OptPondSolver * release() const;

	~Builder();

protected:

	OptPondSolver *  _optPondSolver;

	int              _reste;

	int              _coefficientPondere;

	std::vector<int> _coefficients;

	std::vector<int> _bases;

};


#endif
