#include "Bureaucrat.hpp"
#include <string>

Bureaucrat::Bureaucrat(const std::string Name, int Score){
	_name = Name;
	_GradeTooHighException = "Grade too high";
	_GradeTooLowException = "Grade too low";
	if (Score > 0 && Score <= 150)
		_score = Score;
	else{
		if (Score < 1)
			throw _GradeTooHighException;
		else
			throw _GradeTooLowException;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){

}

Bureaucrat::~Bureaucrat(){
	
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhd){
	
}
