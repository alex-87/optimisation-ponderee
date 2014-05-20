
#include <iostream>
#include <gecode/search.hh>

#include "include/Builder.hh"
#include "include/OptPondSolver.hh"

int main(int argc, char *argv[]) {

	Builder * builder = new Builder(std::cin);
	builder->Initialize();
	OptPondSolver& optPondSolver = builder->release();

	Gecode::DFS<OptPondSolver> dfsOptPondSolver( &optPondSolver );
	while( OptPondSolver * ops = dfsOptPondSolver.next() ) {
		ops->lireSolution();
	}

	return 0;
}
