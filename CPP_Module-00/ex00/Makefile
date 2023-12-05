NAME     = megaphone
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS     = ./megaphone.cpp
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
