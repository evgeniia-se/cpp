# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/09 19:58:52 by esergeev          #+#    #+#              #
#    Updated: 2026/02/10 18:16:08 by esergeev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC_DIR = .
OBJ_DIR = obj
SOURCES = megaphone.cpp
OBJECTS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.cpp=.o                                        ))

CC = c++
RM = rm -f
GDBFLAGS = -g
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS) | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "✅ $(NAME) compiled successfully!"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

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
