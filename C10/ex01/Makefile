# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 19:46:04 by lhawick           #+#    #+#              #
#    Updated: 2020/08/24 19:48:22 by lhawick          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_cat

SRC		=	ft_cat.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc ft_cat.o -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)