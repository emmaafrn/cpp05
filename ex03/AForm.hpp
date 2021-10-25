#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
std::string	_name;
bool		_signed;
const int	_s_grade;
const int	_exec_grade;
public:
	Form(const int s_core, const int e_grade, std::string name);
	Form(const Form& copy);
	virtual ~Form();
	std::string		getName(void) const;
	int				getSignGrade(void) const;
	int				getExecGrade(void) const;
	bool			getStatus(void) const;
	void			beSigned(Bureaucrat& bureaucrat);
	virtual void	execute (Bureaucrat const & executor) const = 0;
	class GradeTooHighException : public std::exception{
		public :
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
	};
	class GradeTooLowException : public std::exception{
		public :
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
	};
};
	std::ostream &operator<<(std::ostream &lhs, Form &rhs);

#endif
