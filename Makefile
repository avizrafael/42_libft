NAME	= libft.a

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum ft_isascii ft_isprint \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

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