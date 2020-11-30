# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 18:15:21 by lhawick           #+#    #+#              #
#    Updated: 2020/08/24 19:23:58 by lhawick          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror ft_display_file.c
	gcc ft_display_file.o -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)