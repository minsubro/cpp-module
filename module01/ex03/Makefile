CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address
SRCS = HumanA.cpp	\
	   HumanB.cpp	\
	   main.cpp		\
	   Weapon.cpp	

NAME = a.out
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :
	make fclean
	make all

.PHONY: all clean fclean re