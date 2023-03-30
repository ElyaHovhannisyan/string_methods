SRCS = $(shell find "." -name "*.c" ! -name "ft_lst*.c")
 	 
OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I.

NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc ${NAME} $(OBJS)
	ranlib ${NAME}

bonus: $(BONUS_OBJS)
	ar rc ${NAME} $(BONUS_OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
