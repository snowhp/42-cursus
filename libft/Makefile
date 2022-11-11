#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := a.out
CC        := cc
FLAGS    := -Wall -Wextra -Werror   
LIBC = ar rc
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      ft_strchr.c \
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
                          main.c \
                           #ft_strnstr.c
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

so:
	${CC} -nostartfiles -fPIC $(FLAGS) $(SRCS)
	${CC} -nostartfiles -shared -o libft.so $(OBJS)

.PHONY:		all clean fclean re


