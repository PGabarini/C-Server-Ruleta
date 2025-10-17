#include "./utils/main.h"

int main(){

    srand(time(NULL));

    int opcion = -1;

    resetearNumerosCubiertos();
    
    pedirDinero();

    pedirValorDeFicha();


    while (opcion != 99)
    {   
        opcion =  elegirOpcion();
        procesarOpcion(opcion);
    }

    pedirRepeticiones();

    mostrarDineroAntesDeJuego();

    comenzarRuleta();
    

    return 0 ;
}






