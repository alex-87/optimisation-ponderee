
#include "include/Builder.hh"
#include "include/ConstraintRelation.hh"

Builder::Builder(std::istream& entry) : BuilderAbstract(entry) {

	int r1 = 0, r2 = 0;

	_entry >> r1;
	_entry >> r2;

	_reste = (r1 * r2);

	int counter = 0;
	while( _entry ) {

		int i = 0;

		_entry >> i;
		_bases.push_back( i );

		_entry >> i;
		_coefficients.push_back( i );

		counter++;
	};

	counter--;

	_optPondSolver = new OptPondSolver(counter);
}

void Builder::Initialize() {

	ConstraintRelation * constraint = new ConstraintRelation(_bases, _coefficients, _reste);
	_optPondSolver->addConstraint( *constraint );
	_optPondSolver->branchement();
}

OptPondSolver& Builder::release() const {
	return *_optPondSolver;
}

Builder::~Builder() {

}
