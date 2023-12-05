NAME     =	Open
CPPFLAGS =	-std=c++98 -Wall -Werror -Wextra
SRCS     =	./main.cpp ./ClapTrap.cpp
OBJS     =  $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			c++ $^ $(CPPFLAGS) -o $@

all:		$(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclen re