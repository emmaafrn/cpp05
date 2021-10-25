#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(72, 45, "RobotomyRequest"){
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form(72, 45, "RobotomyRequest"){
	_target = copy._target;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	int	mystery_nbr;
	srand(time(0));
	
	std::cout << executor.getName() << " executs " << getName() << std::endl;
	mystery_nbr = rand() % 100 + 1;
	std::cout << "* pierce noises *" << std::endl;
	if (mystery_nbr % 2 == 0)
		std::cout << _target << " has been lobotomized" << std::endl;
	else
		std::cout << "The lobotomization of " << _target << " has been a fail" << std::endl;
}