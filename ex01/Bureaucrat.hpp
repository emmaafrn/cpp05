#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


#include <string>
#include <iostream>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat{
private:
std::string		_name;
int				_grade;
public:
	Bureaucrat(const std::string Name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
	std::string	getName(void);
	int			getGrade(void);
	void		lessGrade(void);
	void		moreGrade(void);
	void		signForm(Form& form);
	class GradeTooHighException : public std::exception{
		public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
	};
	class GradeTooLowException : public std::exception{
		public :
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
	};
};
	std::ostream &operator<<(std::ostream &lhs, Bureaucrat &rhs);

#endif