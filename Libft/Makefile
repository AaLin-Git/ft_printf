CC =	cc
CFLAGS =	-Wall -Wextra -Werror
RM =	rm -f
NAME =	libft.a
SRC =	ft_putchar.c ft_putstr.c ft_putnbr.c
DEST =	$(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

all: $(NAME)

$(NAME) : $(DEST)
	ar rcs $(NAME) $(DEST)

clean :
	$(RM) $(DEST)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus
