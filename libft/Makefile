# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 14:47:04 by tde-sous          #+#    #+#              #
#    Updated: 2022/11/03 20:08:01 by tde-sous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = teste

SRC = Exec

all:
	cc -Wall -Wextra -Werror -o $(NAME) *.o

ola:
	cc -c *.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all