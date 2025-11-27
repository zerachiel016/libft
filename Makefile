# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 04:59:32 by zdadsi            #+#    #+#              #
#    Updated: 2025/10/30 09:49:18 by zdadsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
SRC_DIR =  src
BUILD_DIR = build

CFLAGS = -Wall -Wextra -Werror
CC = cc

INC_DIR = include/
CFLAGS += -I$(INC_DIR)
HEADER = libft.h

SRC = $(wildcard src/*.c)

OBJ	= $(subst $(SRC_DIR)/,$(BUILD_DIR)/,$(SRC:.c=.o))

all: $(TARGET)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/$(HEADER) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $@

$(TARGET): $(OBJ)
	ar rcs $(TARGET) $(OBJ)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(TARGET)
	
re: fclean all

.PHONY: clean
