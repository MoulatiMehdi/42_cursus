CC = cc 
CFLAGS = -Wall -Wextra -fsanitize=address -g


SRCS=$(wildcard ./*.c) $(wildcard ~/github/ctest/utils/*.c) $(wildcard ../ft_*.c)
DEPS=$(wildcard ~/github/ctest/includes/) ../
OBJS=$(SRCS:.c=.o)

NAME = test

all : $(NAME)

$(NAME) : $(SRCS) $(DEPS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) $(addprefix -I,$(DEPS))
	rm -rf test.dSYM

fclean :   
	rm -rf $(NAME)

re : fclean all  

.PHONY: re clean fclean all test
