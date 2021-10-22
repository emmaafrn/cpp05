#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(72, 45, "RobotomyRequest"){
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	int	mystery_nbr;

	std::cout << executor.getName() << " executs " << getName() << std::endl;

	mystery_nbr = rand() % 10 + 1;
	std::cout << "* pierce noises *" << std::endl;
	if (mystery_nbr % 2 == 0)
		std::cout << _target << " has been lobotomized" << std::endl;
	else
		std::cout << "The lobotomization of " << _target << " has been a fail" << std::endl;
}