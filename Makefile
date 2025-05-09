
NAME = libftprintf.a

COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_printf_chars.c ft_printf_hex.c 

MEMORY = -g -fsanitize=address,undefined

C_OBJECTS = $(SRCS:.c=.o)
.SECONDARY: ${C_OBJECTS}

BONUS_OBJECTS = $(BONUSFILES:.c=.o)

all: $(NAME)

$(NAME): $(C_OBJECTS)
	@ar rcs $@ $^

%.o: %.c
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(C_OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	@rm -f $(NAME)
	@rm -f .bonus

re: fclean all

test: 
	@cc $(MEMORY) $(SRCS) main.c -o output
	@./output
	@rm -f output

bonus: .bonus

.bonus: $(NAME) $(BONUS_OBJECTS) $(INCLUDE)
	@ar rcs $(NAME) $(BONUS_OBJECTS)
	@touch .bonus

.PHONY: all clean fclean re bonus
