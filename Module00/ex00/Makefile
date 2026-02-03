NAME = megaphone

SRC_DIR = .
OBJ_DIR = obj
SOURCES = megaphone.cpp
OBJECTS = $(subst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

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
