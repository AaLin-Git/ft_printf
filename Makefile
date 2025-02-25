CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libftprintf.a
SUBDIR = Libft

SRC = ft_printf.c ft_printf_utils.c
OBJ = $(SRC:.c=.o)
LIBFT = $(SUBDIR)/libft.a

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C $(SUBDIR)

$(NAME): $(OBJ) $(LIBFT)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(MAKE) -C $(SUBDIR) fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
