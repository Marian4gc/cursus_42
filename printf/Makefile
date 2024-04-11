# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 12:32:10 by marianga          #+#    #+#              #
#    Updated: 2024/04/11 12:59:36 by marianga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC = ft_printf.c

OBJ	= $(SRC:.c=.o)
#HEADER = ft_printf.h

all = $(NAME)

$(NAME): $(OBJ)

%.o: %.c $(INCLUDES)
        $(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re