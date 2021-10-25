#include "Intern.hpp"

Intern::Intern(){
	_forms[0] = "presidential pardon";
	_forms[1] = "robotomy request";
	_forms[2] = "shrubbery creation";
	funcTab[0] = &Intern::newPPForm;
	funcTab[1] = &Intern::newRRForm;
	funcTab[2] = &Intern::newSCForm;
}

Intern::~Intern(){
}

Intern::Intern(const Intern &copy){
	*this = copy;
}

Form*	Intern::newPPForm(std::string target){
	std::cout << "Intern creates ";
	Form *form = new PresidentialPardonForm(target);
	return (form);
}

Form*	Intern::newRRForm(std::string target){
	std::cout << "Intern creates ";
	Form *form = new RobotomyRequestForm(target);
	return (form);
}

Form*	Intern::newSCForm(std::string target){
	std::cout << "Intern creates ";
	Form *form = new ShrubberyCreationForm(target);
	return (form);
}

Form *Intern::makeForm(std::string name, std::string target){
	Form	*form;
	int		res = -1;
	int		i = 0;

	while (res != 0 && i < 3){
		res = name.compare(_forms[i]);
		if (res != 0)
			i++;
	}
	if (res == 0 && i < 3){
		form = (this->*funcTab[i])(target);
		return (form);
	}
	else {
		std::cout << "Error, unknown form" << std::endl;
		return (NULL);
	}
}

Intern	&Intern::operator=(const Intern &rhs){
	int i = 0;
	while(i < 3){
		_forms[i] = rhs._forms[i];
		funcTab[i] = rhs.funcTab[i];
		i++;
	}
	return (*this);
}