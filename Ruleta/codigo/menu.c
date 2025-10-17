#include "../utils/menu.h"

int elegirOpcion(){

    printf("\n \n ### Dinero ACTUAL  = %d  \n \n",dineroDisponible );

    char nombre_variable[20];
    
    printf("\nAPUESTAS: \n NUMEROS:  0 -- 1 -- 2 -- 3 ... \n (37)Rojo -- (38)Negro \n (39)Pares -- (40)Impares \n (41)Menores -- (42)Mayores");
    printf("(43)Docena 1 -- (44)Docena 2 -- (45)Docena 3 \n (46)Columna 1 -- (47)Columna 2 -- (48)Columna 3 \n*(98)Ver apuestas \n(99)Terminar de apostar");
    printf("\n ELIJA APUESTA: ");

    scanf("%19s", nombre_variable);
    int opcion = atoi(nombre_variable);

    return opcion;
}

void pedirDinero(){
    char nombre_variable[20];
    printf("\n DINERO DISPONIBLES: ");
    scanf("%19s", nombre_variable);
    dineroDisponible = atoi(nombre_variable);
    dineroGastado= dineroDisponible;
}

void pedirValorDeFicha(){
    char nombre_variable[20];
    printf("\n VALOR DE FICHA: ");
    scanf("%19s", nombre_variable);
    valorDeFicha = atoi(nombre_variable);
}

void pedirRepeticiones(){
    char nombre_variable[20];
    printf("\n CANTIDAD DE REPETICIONES DE JUGADA: ");
    scanf("%19s", nombre_variable);
    cantidadRepeticiones = atoi(nombre_variable);
}

void mostrarDineroAntesDeJuego(){
     printf("\n \n ### Dinero INICIAL = %d  \n \n",dineroGastado );
    dineroGastado = dineroGastado - dineroDisponible;
    printf("\n \n ### Dinero ANTES de giro = %d  \n \n",dineroDisponible );
}

void mostrarApuestasHechas(){
    int i =1;

    for(i; i<=cantidadDeApuestas;i++){
        printf("\n----\nApuesta numero %d  | #: %d  | X: %d\n----\n",i,apuestasHechas[i].numeroCubierto,apuestasHechas[i].multiplicador);
    }
}