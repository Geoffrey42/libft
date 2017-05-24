# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggane <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/07 10:38:58 by ggane             #+#    #+#              #
#    Updated: 2016/12/19 01:04:52 by ggane            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LDFLAGS=-L.
LDLIBS=-lft
SRC = btree_apply_infix.c btree_apply_prefix.c btree_apply_rev_infix.c \
btree_apply_suffix.c btree_create_node.c btree_insert_data.c \
btree_search_item.c ft_abs.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_itoa.c \
ft_itoa_base.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c \
ft_putendl_fd.c ft_putnbr.c ft_putnbr_base.c ft_putnbr_fd.c ft_putstr.c \
ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c \
ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c get_next_line.c \
is_empty.c btree_delete.c copy_array_str.c create_pathname.c \
copy_str_from_array.c add_str_to_array.c len_till_c.c erase_char_array.c \
ft_putnbrdl.c
OBJ = $(SRC:.c=.o)
INC = ./inc/

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean clean
