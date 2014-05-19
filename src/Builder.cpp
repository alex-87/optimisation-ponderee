
#include "include/Builder.hh"

Builder::Builder(const std::istream& entry) : BuilderAbstract(entry) {
	_optPondSolver = new OptPondSolver();
}

void Builder::Initialize() {
}

OptPondSolver& Builder::release() const {
	return *_optPondSolver;
}

Builder::~Builder() {

}
