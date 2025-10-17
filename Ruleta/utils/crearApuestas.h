#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Interno
#include "apuestasPosibles.h"
#include "globales.h"
#include "menu.h"

#ifndef CREARAPUESTAS_H
#define CREARAPUESTAS_H

void crearApuestaEspecial(int);
void crearApuestas(int numerosApostados[],int multiplicador,int cant);
int cubrirNumero(int);
void hacerApuesta(int,int);
void procesarOpcion(int opcion);
#endif