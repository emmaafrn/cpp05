#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


#include <string>
#include <iostream>
#include <exception>

class Bureaucrat{
private:
std::string		_name;
int				_grade;
public:
	Bureaucrat(const std::string Name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
	void	signForm(void);
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
	std::ostream &operator<<(std::ostream &lhs, const Bureaucrat &rhs);

#endif