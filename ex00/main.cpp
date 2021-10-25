#include "Bureaucrat.hpp"

int	main(){
	try{
		Bureaucrat("Sam", 1);
		Bureaucrat("Alex", 15);
		Bureaucrat("Clover", 151);
	}
	catch (std::exception & e) {
	}
	return (0);
}