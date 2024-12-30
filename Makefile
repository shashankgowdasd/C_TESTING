CC = gcc
CFLAGS = -Wall -Wextra -std=c99
UNITY_SRC = Unity/src/unity.c
SRC = maths_operation.c Testing/test_math_operation.c
OBJ = $(SRC:.c=.o)
EXE = test_math_operation

all: $(EXE)

$(EXE): $(OBJ) $(UNITY_SRC)
	$(CC) $(OBJ) $(UNITY_SRC) -o $(EXE)

clean:
	rm -f $(OBJ) $(EXE)
