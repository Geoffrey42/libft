# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggane <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/04 11:15:12 by ggane             #+#    #+#              #
#    Updated: 2016/02/18 16:59:44 by ggane            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -Wall -Werror -Wextra
SRC = *.c
INC = ./inc/
SRO = *.o

all: $(NAME)

$(NAME):
		$(CC) -I $(INC) -c $(SRC)
		ar rc $(NAME) $(SRO)
		ranlib $(NAME)
clean:
		rm -f $(SRO)
fclean:	clean
		rm -f $(NAME)
re:		fclean all
