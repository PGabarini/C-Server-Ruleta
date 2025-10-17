#include <stdio.h>

#ifndef GLOBALES_H
#define GLOBALES_H

extern int numerosCubiertos[28];

extern int cantidadDeApuestas;
extern int dineroDisponible;
extern int dineroGastado;
extern int valorDeFicha;
extern int cantidadRepeticiones;

typedef struct {
        int multiplicador;
        int numeroCubierto;}Apuesta;

extern Apuesta apuestasHechas[100];

void resetearNumerosCubiertos();

#endif