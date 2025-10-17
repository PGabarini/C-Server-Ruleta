
CC = gcc
CFLAGS = -Wall -g

SRC = main.c apuestasPosibles.c menu.c crearApuestas.c globales.c ruleta.c
OBJ = $(SRC:.c=.o)
EJECUTABLE = rul

all: $(EJECUTABLE)

$(EJECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: ./codigo/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(EJECUTABLE)
	rm -f ./codigo/*.o $(EJECUTABLE)
	