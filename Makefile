# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhlatshw <nhlatshw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 13:24:40 by nhlatshw          #+#    #+#              #
#    Updated: 2019/06/25 15:03:21 by nhlatshw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_isalpha.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_memset.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isalnum.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strdup.c \
		ft_atoi.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_isspace.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) was succesfullt created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

$(OBJ): %.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@echo "Objects Deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) Deleted"

re: fclean all

.PHONY: all, clean, fclean, re