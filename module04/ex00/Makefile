CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp	\
	   Animal.cpp	\
	   Cat.cpp		\
	   Dog.cpp		\
	   WrongAnimal.cpp	\
	   WrongCat.cpp		
NAME = a.out
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $^ -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :
	make fclean
	make all

.PHONY: all clean fclean re