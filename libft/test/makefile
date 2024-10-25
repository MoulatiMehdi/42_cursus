CC = cc 
CFLAGS = -Wall -Wextra -fsanitize=address -g


SRCS=$(wildcard ./*.c) $(wildcard ~/github/ctest/utils/*.c) $(wildcard ../ft_*.c)
DEPS=$(wildcard ~/github/ctest/includes/) ../
OBJS=$(SRCS:.c=.o)

NAME = test

all : $(NAME)

$(NAME) : $(SRCS) $(DEPS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) $(addprefix -I,$(DEPS))

fclean :   
	rm -rf $(NAME)
	rm -rf test.dSYM

re : fclean all  

.PHONY: re clean fclean all test
