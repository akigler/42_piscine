# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akigler <akigler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 10:38:56 by akigler           #+#    #+#              #
#    Updated: 2019/07/25 23:24:06 by akigler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_dsiplay_file

SRC = main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean:clean
	rm -f $(NAME)

re: fclean all