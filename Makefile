TARGET = bin/clox
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))

default: $(TARGET)

clean: 
	rm -f obj/*.o
	rm -f bin/*

$(TARGET): $(OBJ)
	clang -o $@ $?

obj/%.o : src/%.c
	clang -c $< -o $@ -Iinclude
