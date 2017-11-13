# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrady <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/27 20:21:04 by bbrady            #+#    #+#              #
#    Updated: 2017/03/17 06:22:24 by bbrady           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CHECK = gcc -Wall -Wextra -Werror -c -I
SRC = *.c
HEAD = libft.h
OBJECT = *.o

all: $(NAME)

$(NAME):
	$(CHECK) $(HEAD) $(SRC)
		ar rc $(NAME) $(OBJECT)

clean:
		/bin/rm -f $(OBJECT)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
