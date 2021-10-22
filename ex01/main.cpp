#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){
	try{
		Form leform = Form(3, 2, "En Form");
		Bureaucrat Sam = Bureaucrat("Sam", 1);
		Bureaucrat Alex = Bureaucrat("Alex", 4);
		Bureaucrat Clover = Bureaucrat("Clover", 3);
		
		leform.beSigned(Sam);
		Alex.moreGrade();
		leform.beSigned(Alex);
		Clover.lessGrade();
		leform.beSigned(Clover);
	}
	catch (std::exception & e) {
	}
	return (0);
}