
#include "include/Builder.hh"

void Builder::Initialize() {
}

OptPondSolver& Builder::release() const {
	return *_optPondSolver;
}

Builder::~Builder() {

}
