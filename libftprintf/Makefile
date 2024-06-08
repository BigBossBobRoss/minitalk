# Library name
NAME	= libftprintf.a

# Compiler
CC	= cc

# Compiler flags
CFLAGS	= -Wall -Wextra -Werror

# Include Directory for libft
INCLUDES = -I libft

# Source Files
PRINTF_SRCS =	printf/ft_printf.c \
				printf/ft_abs.c \
				printf/ft_putaddress.c \
				printf/ft_putbase_fd.c \
				printf/ft_putchar.c \
				printf/ft_puthexa.c \
				printf/ft_putnbr.c \
				printf/ft_putstr.c \
				printf/ft_putunsigned.c

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Object files
PRINTF_OBJS = $(PRINTF_SRCS:.c=.o)

all: $(NAME)

# Compilation rule for libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Main target
$(NAME): $(LIBFT) $(PRINTF_OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(PRINTF_OBJS)

# Generic rule for object files
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Clean rule
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(PRINTF_OBJS)

# Clean and remove library rule
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

# Rebuild rule
re: fclean all

.PHONY: all clean fclean re
