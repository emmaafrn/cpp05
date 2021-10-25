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
	std::cout << *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
	*this = copy;
}

Bureaucrat::~Bureaucrat(){
	
}

std::string	Bureaucrat::getName(){
	return (_name);
}

int			Bureaucrat::getGrade(){
	return (_grade);
}

void		Bureaucrat::moreGrade(){
	if (_grade > INT_MIN)
		_grade--;
}

void		Bureaucrat::lessGrade(){
	if (_grade < INT_MAX)
		_grade++;
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

std::ostream	&operator<<(std::ostream &lhs, Bureaucrat &rhs){
	lhs << "Bureaucrat " << rhs.getName() << " of grade " << rhs.getGrade() << std::endl;
	return (lhs);
}
