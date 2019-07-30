# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akigler <akigler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 13:20:54 by akigler           #+#    #+#              #
#    Updated: 2019/07/23 14:59:32 by akigler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/*.c

HEADERS = includes/*.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror -I$(HEADERS) $(SRC)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
