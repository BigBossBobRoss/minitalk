# Library name
NAME	= libft.a
# Compiler
CC	= gcc
# Compiler flags
CFLAGS	= -Wall -Wextra -Werror

# Source Files
SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_itoa.c \
		ft_split.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		# ft_abs.c \
		# ft_putadress.c \
		# ft_putbase_fd.c \
		# ft_putchar.c \
		# ft_putnbr.c \
		# ft_putstr.c \
		# ft_putunsigned.c \
		# ft_puthexa.c

# Object files
OBJS = $(SRCS:.c=.o)

# Build rule
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# Clean rule
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
# Clean and remove library rule
fclean: clean
	rm -f $(NAME)
# Rebuild rule
re: fclean all
# Bonus rule
bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $^
.PHONY: all clean fclean re bonus
