#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


#include <string>
#include <iostream>
#include <exception>

class Bureaucrat{
private:
std::string		_name;
int				_score;
std::string		_GradeTooHighException;
std::string		_GradeTooLowException;
public:
	Bureaucrat(const std::string Name, int Score);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
};










#endif