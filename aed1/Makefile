CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = main
SRC = mat3.c
OBJ = $(SRC:.c=.o)

# Arquivos de entrada e saída
INPUT = input.txt
OUTPUT = output.txt

all: save

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

save: $(TARGET)
	./$(TARGET) < $(INPUT) > $(OUTPUT)

clean:
	rm -f $(OBJ) $(TARGET)
