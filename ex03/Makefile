NAME = Intern

SRCS = Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

INC = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

CXX  = clang++

RM  = rm -f

INC_CMP = -I .

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(INC_CMP) $(OBJS) -o $(NAME)

$(OBJS):		$(INC)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			 fclean all

.PHONY: all clean fclean re
