NAME = push_swap
LIBS = libft/libft.a

SRC = ft_main.c \
		src/ft_rule_base.c \
		src/ft_rules.c \
		src/ft_set_list.c \
		src/ft_free_funcs.c \
		src/ft_validations.c

GREEN=\033[0;32m
SET_DEF=\033[0m

all: $(NAME)

$(NAME): $(SRC) $(LIBS)
	@cc -Wall -Wextra -Werror $(SRC) $(LIBS) -o $(NAME) -Iincludes -Ilibft
	@echo "$(GREEN)push_swap Compiled Successfully.$(SET_DEF)"

$(LIBS): 
	@make -C libft
	@echo "$(GREEN)libft Compiled Successfully.$(SET_DEF)"

clean:
	@make -C libft clean

fclean:
	@rm -f $(NAME) $(LIBS)
	@make -C libft fclean
	@echo "$(GREEN)Files Removed$(SET_DEF)"

re: fclean all
