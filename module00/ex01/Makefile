CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp			\
	   PhoneBook.cpp	\
	   Contact.cpp

NAME = phonebook
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

.PHONY: all clean fclean re%