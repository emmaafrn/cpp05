#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>


Bureaucrat::Bureaucrat(const std::string Name, int grade) : _name(Name), _grade(grade){
	if (_grade > 0 && _grade <= 150)
		std::cout << *this;
	else{
		if (grade < 1){
			throw Bureaucrat::GradeTooHighException();
		}
		else{
			throw Bureaucrat::GradeTooLowException();
		}
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade){
	
}

Bureaucrat::~Bureaucrat(){
	
}

std::string	Bureaucrat::getName() const{
	return (_name);
}

int			Bureaucrat::getGrade() const{
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

void	Bureaucrat::signForm(Form& form){
	if (form.getStatus() == 1)
		std::cout << _name << " signs " << form.getName() << std::endl;
	else
		std::cout << _name << " cannot sign because there is an ";
}

void	Bureaucrat::executeForm(Form const & form) const{
	if (form.getStatus() == 1){
		if (getGrade() <= form.getExecGrade())
			form.execute(*this);
		else {
			throw(Form::GradeTooLowException());
		}
	}
	else
		throw (Bureaucrat::GradeTooLowException());
}

std::ostream	&operator<<(std::ostream &lhs, Bureaucrat &rhs){
	lhs << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade() << std::endl;
	return (lhs);
}
