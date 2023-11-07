NAME	= libft.a

SRCS =	ft_isalpha.c ft_isdigit.c

OBJS	= $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: 
	$(CC) $(CFLAGS) -c $(SRCS) -I./ 
	ar -rc $(NAME) $(OBJS)

clean:
		rm -f $(NAME)
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re