#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public Form {
private:
std::string	_target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	~PresidentialPardonForm();
	void	execute (Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &lhs, PresidentialPardonForm &rhs);

#endif