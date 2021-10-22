#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include "AForm.hpp"

class RobotomyRequestForm : public Form{
private:
std::string	_target;
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	void	execute (Bureaucrat const & executor) const;
};



#endif