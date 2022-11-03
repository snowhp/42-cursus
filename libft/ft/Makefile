# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tde-sous <tde-sous@42.porto.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 14:47:04 by tde-sous          #+#    #+#              #
#    Updated: 2022/11/03 15:46:33 by tde-sous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = teste

SRC = source.clean

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all