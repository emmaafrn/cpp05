NAME = Bureaucrat

SRCS = Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

INC = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

CXX  = clang++

RM  = rm -f

INC_CMP = -I .#$(addprefix -I, $(INC))

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
