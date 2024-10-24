CC = cc 
CFLAGS = -Wall -Wextra -fsanitize=address -g


SRCS=$(wildcard ./*.c) $(wildcard ~/github/ctest/utils/*.c) $(wildcard ../ft_*.c)
DEPS=$(wildcard ~/github/ctest/includes/) ../
OBJS=$(SRCS:.c=.o)

NAME = test

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

%.o : %.c $(DEPS)
	
	$(CC) $(CFLAGS) -c $(addprefix -I,$(DEPS)) -o $@ $< 
clean : 
	rm -f $(OBJS)
fclean :  clean 
	rm -f $(NAME)

re : fclean all  

.PHONY: re clean fclean all test
