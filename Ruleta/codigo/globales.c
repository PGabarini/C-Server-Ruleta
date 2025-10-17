#include "../utils/globales.h"

int numerosCubiertos[28] = {0};
int cantidadDeApuestas = 0;
int dineroDisponible = 0;
int dineroGastado = 0;
int valorDeFicha = 0;
int cantidadRepeticiones = 0;
Apuesta apuestasHechas[100] = {0};

void resetearNumerosCubiertos(){

    for(int i=1 ;i<=27;i++)
    {
        numerosCubiertos[i] =-1;
    }

}


