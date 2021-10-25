#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public Form{
private:
std::string	_target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	virtual ~ShrubberyCreationForm();
	void	execute (Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &lhs, ShrubberyCreationForm &rhs);

#endif