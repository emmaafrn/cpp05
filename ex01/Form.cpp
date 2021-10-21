#include "Form.hpp"

Form::Form(int s_grade, int e_grade, std::string name){
	_s_grade = s_grade;
	_exec_grade = e_grade;
	_name = name;
	_signed = 0;
}

Form::Form(const Form& copy){
	*this = copy;
}

Form::~Form(){

}

Form::GradeTooHighException::GradeTooHighException(){
	std::cout << "Error, Grade too high for the Form" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(){
	std::cout << "Error, Grade too low for the Form" << std::endl;
}