# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -g

# Target executable name
TARGET = my_program.out

# Source and object files
SRC = main.c impl.c
OBJ = $(SRC:.c=.o)

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compilation
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean
clean:
	rm -f $(OBJ) $(TARGET)
