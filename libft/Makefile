
SRCS = ft_strchr.c \
                          ft_isdigit.c \
                          ft_strrchr.c \
                          ft_isalpha.c \
                          ft_strlen.c \
                          ft_tolower.c \
                          ft_atoi.c \
                          ft_isalnum.c \
                          ft_isprint.c \
                          ft_strncmp.c \
                          ft_toupper.c \
                          ft_bzero.c \
                          ft_memchr.c \
                          ft_strlcat.c \
                          ft_memset.c \
                          ft_strlcpy.c \
                          ft_memcmp.c \
                          ft_isascii.c \
                          ft_memcpy.c \
                          ft_memmove.c \
                          ft_calloc.c \
                          ft_strdup.c \
                          ft_strnlen.c \
                          ft_strnstr.c \
                          ft_substr.c \
                          ft_strjoin.c \
                          ft_strtrim.c  \
                          ft_split.c \
                          ft_itoa.c \
                          ft_strmapi.c \
                          ft_striteri.c \
                          ft_putchar_fd.c \
                          ft_putstr_fd.c \
                          ft_putendl_fd.c \
                          ft_putnbr_fd.c \
                          main.c \

BNS_SRCS = test.c\

OBJS = $(SRCS:.c=.o)
BNS_OBJS = $(BNS_SRCS:%.c=%.o)

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = cc
LIBC = ar rc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)																	
	$(LIBC) $(NAME) $(OBJS)

bonus: $(BNS_OBJS) $(OBJS)
	$(LIBC) $(NAME) $(BNS_OBJS) $(OBJS)

clean:
	$(RM) $(OBJS) $(BNS_OBJS)

fclean: clean
	$(RM) $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	$(CC) -nostartfiles -shared -o libft.so $(OBJS)

re: fclean all
