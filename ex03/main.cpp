#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(){

	Intern	someRandomIntern;
	Intern	coolestRandomIntern;
	Intern	funniestRandomIntern;
	Form*	rrf;
	Form*	ppf;
	Form*	scf;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = coolestRandomIntern.makeForm("presidential pardon", "a bad guy");
	scf = funniestRandomIntern.makeForm("shrubbery creation", "a tree");

	Bureaucrat	Joe = Bureaucrat("Joe", 2);

	rrf->beSigned(Joe);
	Joe.executeForm(*rrf);

	delete rrf;
	delete ppf;
	delete scf;
	
	return (0);
}