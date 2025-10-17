
CC = gcc
CFLAGS = -Wall -g

SRC = main.c codigo/apuestasPosibles.c codigo/menu.c \
      codigo/crearApuestas.c codigo/globales.c codigo/ruleta.c \
      server/server.c

OBJ = $(SRC:.c=.o)
EJECUTABLE = rul

all: $(EJECUTABLE)

$(EJECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(EJECUTABLE)
	rm -f ./codigo/*.o $(EJECUTABLE)
	rm -f ./server/*.o $(EJECUTABLE)
	