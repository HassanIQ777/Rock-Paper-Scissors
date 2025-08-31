# Compiler and flags
CC     = gcc
CFLAGS = -Wall -Wextra -std=c11 -I./src

# Project name (final executable)
TARGET = game

# Source and object files
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

# Default target
all: $(TARGET)

# Link step
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile step (pattern rule)
src/%.o: src/%.c src/game.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGET)
