
#include <iostream>
#include <gecode/search.hh>

#include "include/Builder.hh"
#include "include/OptPondSolver.hh"

inline void displayVec(std::vector<int>& vec) {
	std::cout << "###" << std::endl;
	for(unsigned int i=0; i<vec.size(); i++)
		std::cout << vec.at(i) << std::endl;
	std::cout << "###" << std::endl;
}

int main(int argc, char *argv[]) {

	Builder * builder = new Builder(std::cin);
	builder->Initialize();
	OptPondSolver * optPondSolver = builder->release();

	Gecode::DFS<OptPondSolver> dfsOptPondSolver( optPondSolver );
	while( OptPondSolver * ops = dfsOptPondSolver.next() ) {
		displayVec(ops->lireSolution());
	}

	return 0;
}
