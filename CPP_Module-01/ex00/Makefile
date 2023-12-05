NAME     = zombie
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS     = ./Zombie.cpp ./main.cpp ./newZombie.cpp ./randomChump.cpp
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
