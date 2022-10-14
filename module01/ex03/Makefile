CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = HumanA.cpp	\
	   HumanB.cpp	\
	   main.cpp		\
	   weapon.cpp	

NAME = a.out
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $^ -o $(NAME)

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