CC=cc
CFLAGS= -Wall -Wextra -Werror

NAME=libft.a
SRCS= $(wildcard ./ft_*.c)
OBJS=$(SRCS:.c=.o)

all :  $(NAME)

$(NAME) : $(OBJS) 
	ar -crs 

%.o : %.c ./libft.h
	$(CC) $(CFLAGS) $@ -o $<

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all 

.PHONY : all clean fclean re
