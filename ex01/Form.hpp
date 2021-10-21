#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>

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
	void	beSigned(Bureaucrat& bureaucrat);
	class GradeTooHighException : std::exception{
		public :
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
	};
	class GradeTooLowException : std::exception{
		public :
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
	};
};

#endif
