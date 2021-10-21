#include "Bureaucrat.hpp"
#include <string>


Bureaucrat::Bureaucrat(const std::string Name, int grade){
	_name = Name;
	if (grade > 0 && grade <= 150)
		_grade = grade;
	else{
		if (grade < 1){
			throw Bureaucrat::GradeTooHighException();
		}
		else{
			throw Bureaucrat::GradeTooLowException();
		}
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
	*this = copy;
}

Bureaucrat::~Bureaucrat(){
	
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){
	std::cout << "Error, grade too low for bureaucrat" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {

}

Bureaucrat::GradeTooHighException::GradeTooHighException(){
	std::cout << "Error, grade too high for bureaucrat" << std::endl;

}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {

}

std::ostream	&operator<<(std::ostream &lhs, const Bureaucrat &rhs){
	lhs << rhs;
	return (lhs);
}
