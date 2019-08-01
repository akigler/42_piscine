# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akigler <akigler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 16:08:42 by akigler           #+#    #+#              #
#    Updated: 2019/07/28 20:25:06 by akigler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

all: $(NAME)

$(NAME):
	gcc -I -Wall -Wextra -Werror -o $(NAME) *.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all