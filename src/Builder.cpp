
#include "include/Builder.hh"

Builder::Builder(const std::istream& entry) : BuilderAbstract(entry) {
	_optPondSolver = new OptPondSolver(0);
}

void Builder::Initialize() {
}

OptPondSolver& Builder::release() const {
	return *_optPondSolver;
}

Builder::~Builder() {

}
