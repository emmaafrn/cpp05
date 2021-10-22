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
	~ShrubberyCreationForm();
	void	execute (Bureaucrat const & executor) const;
};



#endif