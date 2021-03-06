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
int			_s_grade;
int			_exec_grade;
public:
	Form(int s_core, int e_grade, std::string name);
	Form(const Form& copy);
	~Form();
	std::string		getName(void);
	int				getSignGrade(void);
	int				getExecGrade(void);
	bool			getStatus(void);
	void			beSigned(Bureaucrat& bureaucrat);
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
