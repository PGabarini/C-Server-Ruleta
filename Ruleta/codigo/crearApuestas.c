#include "../utils/crearApuestas.h"

void crearApuestaEspecial(int numeroApuesta){

    int tamanio;

    switch (numeroApuesta)
    {
    case 37:
        tamanio = 18;
        crearApuestas(apuestaRojo,2,tamanio);
        break;
    case 38:
        tamanio = 18;
        crearApuestas(apuestaNegro,2,tamanio);
        break;
    case 39:
        tamanio = 18;
        crearApuestas(apuestaPar,2,tamanio);
        break;
    case 40:
        tamanio = 18;
        crearApuestas(apuestaImpar,2,tamanio);
        break;
    case 41:
        tamanio = 18;
        crearApuestas(apuestaMenores,2,tamanio);
        break;
    case 42:
        tamanio = 18;
        crearApuestas(apuestaMayores,2,tamanio);
        break;
    case 43:
        tamanio = 12;
        crearApuestas(apuestaDocena1,3,tamanio);
        break;
    case 44:
        tamanio = 12;
        crearApuestas(apuestaDocena2,3,tamanio);
        break;
    case 45:
        tamanio = 12;
        crearApuestas(apuestaDocena3,3,tamanio);
        break;
    case 46:
        tamanio = 12;
        crearApuestas(apuestaColumna1,3,tamanio);
        break;
    case 47:
        tamanio = 12;
        crearApuestas(apuestaColumna2,3,tamanio);
        break;
    case 48:
        tamanio = 12;
        crearApuestas(apuestaColumna3,3,tamanio);
        break;
    
    default:
        printf("\n NO SELECCIONO UN NUMERO DE APUESTA VALIDO \n");
        break;
    }
}

void crearApuestas(int numerosApostados[],int multiplicador,int cantidadDeNumerosCubiertos){

     int esPosibleLaApuesta;

    for(int i=0 ; i<cantidadDeNumerosCubiertos;i++){
            
        esPosibleLaApuesta = cubrirNumero(numerosApostados[i]);
            
    }

    if(esPosibleLaApuesta){

    for(int j=0 ; j<cantidadDeNumerosCubiertos;j++){
            
        hacerApuesta(numerosApostados[j],multiplicador);
            
    }}else{printf("\n ========= Esta eleccion supero el numero de cobertura de 27 numeros ======== \n");}

}

int cubrirNumero(int numeroACubrir){

    int i =1;
    
    for(i;i<=27;i++){
        
        if(numerosCubiertos[i] == -1 || numerosCubiertos[i] == numeroACubrir){
            numerosCubiertos[i] = numeroACubrir;
            return 1;
        }
    }
    return 0;
};

void hacerApuesta(int numeroCubierto,int multiplicador){
    Apuesta nuevaApuesta;
    nuevaApuesta.multiplicador = multiplicador;
    nuevaApuesta.numeroCubierto = numeroCubierto;

    cantidadDeApuestas++;
    apuestasHechas[cantidadDeApuestas] = nuevaApuesta;
    return;
}


void procesarOpcion(int opcion){

        int numeroApuestaElegida = opcion;

        if(numeroApuestaElegida != 99 && numeroApuestaElegida != 98)
        {
            dineroDisponible = dineroDisponible - valorDeFicha;
        }


        if(numeroApuestaElegida < 37 )
        {

            if(cubrirNumero(numeroApuestaElegida))
            {
                hacerApuesta(numeroApuestaElegida,36);

            }else{printf("\n ========= Esta eleccion supero el numero de cobertura de 27 numeros ======== \n");}
        }
        if(numeroApuestaElegida >=37 || numeroApuestaElegida <=48)
        {
        
            crearApuestaEspecial(numeroApuestaElegida);
        }
        if(opcion == 98){mostrarApuestasHechas();}

}