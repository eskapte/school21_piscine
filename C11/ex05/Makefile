# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 22:37:22 by lhawick           #+#    #+#              #
#    Updated: 2020/08/26 22:41:58 by lhawick          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op

SRC		=	ft_do_op.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc ft_do_op.o -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)