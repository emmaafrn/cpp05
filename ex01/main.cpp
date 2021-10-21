#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){
	try{
		Form(5, 2, "En Form");
		Bureaucrat("Sam", 1);
		Bureaucrat("Alex", 15);
		Bureaucrat("Clover", 158);
		
	}
	catch (std::exception & e) {
	}
	return (0);
}