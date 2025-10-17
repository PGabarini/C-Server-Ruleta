#include "../utils/ruleta.h"


void comenzarRuleta(){
    
        for(int j = 0; j < cantidadRepeticiones ; j ++){



        if(j>0){
            dineroDisponible = dineroDisponible -dineroGastado;
        }

        

        if(dineroDisponible >=0)
        {
            printf("\n \n ### GIRANDO (%d)",j );

            girarRuleta();
        }else{
            printf("\n \n \n XXXX DINERO AGOTADO XXXX");
            abort();
        }
        
    
    }
}


void girarRuleta(){

    int resultadoRuleta = rand() % 37;; //generacion de 0 a 36
    printf("\n SALIO : %d : ###",resultadoRuleta);
    for(int i = 1; i<=cantidadDeApuestas;i++){

        if(apuestasHechas[i].numeroCubierto == resultadoRuleta)
        {
            dineroDisponible = dineroDisponible + valorDeFicha * apuestasHechas[i].multiplicador;
        }

    }

    printf("\n ### Dinero luego de giro = %d  \n",dineroDisponible );
}