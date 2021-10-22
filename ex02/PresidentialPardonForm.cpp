#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(145, 137, "ShrubberyCreation"){
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	std::cout << executor.getName() << " executs " << getName() << std::endl;
	std::cout << _target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}