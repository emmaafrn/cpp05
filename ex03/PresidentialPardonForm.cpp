#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(145, 137, "PresidentialPardon"){
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form(145, 137, "PresidentialPardon"){
	_target = copy._target;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	std::cout << executor.getName() << " executs " << getName() << std::endl;
	std::cout << _target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}

std::ostream	&operator<<(std::ostream &lhs, PresidentialPardonForm &rhs){
	lhs << "Form " << rhs.getName() << "has been created\n";
	return (lhs);
}
