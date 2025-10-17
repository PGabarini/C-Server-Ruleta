#include "./utils/main.h"

int main(){

    srand(time(NULL));
    
    struct Server server = server_Constructor(AF_INET,8080,SOCK_STREAM,0,10,INADDR_ANY,launch);
    server.launch(&server);

    //https://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C/Sockets
    /*
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
    
    */
    return 0 ;
}






