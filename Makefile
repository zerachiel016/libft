# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 04:59:32 by zdadsi            #+#    #+#              #
#    Updated: 2025/10/29 09:35:50 by zdadsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
CC = cc

HEADER = libft.h

SRC = $(filter-out %_bonus.c, $(wildcard *.c))
SRC_BONUS = $(wildcard *bonus.c)

OBJ	= $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

%.o: %.c 
	$(CC) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all bonus clean fclean re
