# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -g

# Target executable name
TARGET = my_program.out

# Default target
all: $(TARGET)

# Linking
$(TARGET): main.o
	$(CC) $(CFLAGS) -o $@ $^

# Compilation
main.o: main.c impl.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean
clean:
	rm -f $(OBJ) $(TARGET)
