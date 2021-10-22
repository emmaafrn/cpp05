#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){
	try{
		RobotomyRequestForm rf = RobotomyRequestForm("a bad guy");
		ShrubberyCreationForm sf = ShrubberyCreationForm("a tree");
		Bureaucrat Sam = Bureaucrat("Sam", 1);
		Bureaucrat Alex = Bureaucrat("Alex", 4);
		Bureaucrat Clover = Bureaucrat("Clover", 3);

		rf.beSigned(Sam);
		Sam.executeForm(rf);
		sf.beSigned(Alex);
		Alex.executeForm(sf);

	}
	catch (std::exception & e) {
	}
	return (0);
}