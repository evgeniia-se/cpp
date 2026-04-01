NAME = Base

MAKEFLAGS += --no-builtin-rules
.SUFFIXES:

SRC_DIR = .
OBJ_DIR = obj
SOURCES = main.cpp Base.cpp main.cpp
OBJECTS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.cpp=.o))
DEPS = $(OBJECTS:.o=.d)

CC = c++
RM = rm -f
GDBFLAGS = -g -O0
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
DEPFLAGS = -MMD -MP

INCLUDE_DIR = .
all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "✅ $(NAME) compiled successfully!"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(DEPFLAGS) -c $< -o $@

gdb: CFLAGS += $(GDBFLAGS)
gdb: re

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re gdb
-include $(DEPS)
