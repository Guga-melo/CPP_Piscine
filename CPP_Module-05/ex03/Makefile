NAME     = ex03
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS     = ./main.cpp ./Bureaucrat.cpp ./AForm.cpp ./ShrubberyCreationForm.cpp ./RobotomyRequestForm.cpp ./PresidentialPardonForm.cpp ./Intern.cpp
OBJS     = $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			c++ $^ $(CPPFLAGS) -o $@

all:		$(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
