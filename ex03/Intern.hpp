#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
private :
std::string		_forms[3];
typedef Form*	(Intern::* funcPtr)(std::string target);
funcPtr 		funcTab[3];
public:
	Intern();
	~Intern();
	Intern(const Intern& copy);
	Form*	newPPForm(std::string target);
	Form*	newRRForm(std::string target);
	Form*	newSCForm(std::string target);
	Form*	makeForm(std::string name, std::string target);
	Intern	&operator=(const Intern &rhs);
};




#endif