# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/09 20:00:05 by esergeev          #+#    #+#              #
#    Updated: 2026/02/09 21:42:35 by esergeev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

MAKEFLAGS += --no-builtin-rules
.SUFFIXES:

SRC_DIR = .
OBJ_DIR = obj
SOURCES = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJECTS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.cpp=.o))

CC = c++
RM = rm -f
GDBFLAGS = -g -O0
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

INCLUDE_DIR = .
all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "✅ $(NAME) compiled successfully!"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

gdb: CFLAGS += $(GDBFLAGS)
gdb: re

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re gdb
