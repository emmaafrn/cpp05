#include "Form.hpp"

Form::Form(int s_grade, int e_grade, std::string name){
	_s_grade = s_grade;
	_exec_grade = e_grade;
	_name = name;
	_signed = 0;
	std::cout << *this;
}

Form::Form(const Form& copy){
	*this = copy;
}

Form::~Form(){

}

Form::GradeTooHighException::GradeTooHighException(){
	std::cout << "error, Grade too high for the Form" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(){
	std::cout << "error, Grade too low for the Form" << std::endl;
}

Form::GradeTooHighException::~GradeTooHighException() throw(){
	
}

Form::GradeTooLowException::~GradeTooLowException() throw(){
	
}

std::string	Form::getName(void){
	return (_name);
}

int		Form::getExecGrade(void){
	return (_exec_grade);
}

int		Form::getSignGrade(void){
	return (_s_grade);
}

bool	Form::getStatus(void){
	return (_signed);
}

void	Form::beSigned(Bureaucrat& bureaucrat){

	if (bureaucrat.getGrade() <= _s_grade){
		_signed = 1;
		bureaucrat.signForm(*this);
	}
	else {
		_signed = 0;
		bureaucrat.signForm(*this);
		throw Form::GradeTooLowException();
	}
}

std::ostream	&operator<<(std::ostream& lhs, Form& rhs){
	lhs << rhs.getName() << ",Form of minimal grade to sign : " << rhs.getSignGrade() << " and minimal grade to execute : " << rhs.getExecGrade() << std::endl;
	return (lhs);
}