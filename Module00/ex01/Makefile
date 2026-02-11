# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/09 19:59:18 by esergeev          #+#    #+#              #
#    Updated: 2026/02/09 21:40:24 by esergeev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

MAKEFLAGS += --no-builtin-rules
.SUFFIXES:

SRC_DIR = .
OBJ_DIR = obj
SOURCES = PhoneBook.cpp Contact.cpp main.cpp
OBJECTS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.cpp=.o))

CC = c++
RM = rm -f
GDBFLAGS = -g
CFLAGS = -Wall -Wextra -Werror -std=c++98

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
