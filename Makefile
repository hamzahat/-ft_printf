# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/11 11:36:52 by hbenmoha          #+#    #+#              #
#    Updated: 2025/01/11 18:47:05 by hbenmoha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFAGS = -Wall -Wextra -Werror 
SRC = ft_check_char.c ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunsigned.c ft_check_format.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFAGS) -c $< -o $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean