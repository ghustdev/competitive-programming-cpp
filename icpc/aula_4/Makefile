CC = g++
CFLAGS = -Wall -Wextra -g

FILE_NAME = d
TARGET = $(FILE_NAME).exe
SRC = $(FILE_NAME).cpp
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
