

#include "../utils/apuestasPosibles.h"


//Apuestas UN NUMERO
    int apuesta0[]  = {0};
    int apuesta1[]  = {1};
    int apuesta2[]  = {2};
    int apuesta3[]  = {3};
    int apuesta4[]  = {4};
    int apuesta5[]  = {5};
    int apuesta6[]  = {6};
    int apuesta7[]  = {7};
    int apuesta8[]  = {8};
    int apuesta9[]  = {9};
    int apuesta10[] = {10};
    int apuesta11[] = {11};
    int apuesta12[] = {12};
    int apuesta13[] = {13};
    int apuesta14[] = {14};
    int apuesta15[] = {15};
    int apuesta16[] = {16};
    int apuesta17[] = {17};
    int apuesta18[] = {18};
    int apuesta19[] = {19};
    int apuesta20[] = {20};
    int apuesta21[] = {21};
    int apuesta22[] = {22};
    int apuesta23[] = {23};
    int apuesta24[] = {24};
    int apuesta25[] = {25};
    int apuesta26[] = {26};
    int apuesta27[] = {27};
    int apuesta28[] = {28};
    int apuesta29[] = {29};
    int apuesta30[] = {30};
    int apuesta31[] = {31};
    int apuesta32[] = {32};
    int apuesta33[] = {33};
    int apuesta34[] = {34};
    int apuesta35[] = {35};
    int apuesta36[] = {36};

//apuestas ESPECIALES
    // Colores 
 int apuestaRojo[] = {
        1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36
    };
 int apuestaNegro[] = {
        2,4,6,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35
    };

    // Par / Impar
 int apuestaPar[] = {
        2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36
    };
 int apuestaImpar[] = {
        1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35
    };

    // Docenas
 int apuestaDocena1[] = {1,2,3,4,5,6,7,8,9,10,11,12};
 int apuestaDocena2[] = {13,14,15,16,17,18,19,20,21,22,23,24};
 int apuestaDocena3[] = {25,26,27,28,29,30,31,32,33,34,35,36};

    // Columnas
 int apuestaColumna1[] = {1,4,7,10,13,16,19,22,25,28,31,34};
 int apuestaColumna2[] = {2,5,8,11,14,17,20,23,26,29,32,35};
 int apuestaColumna3[] = {3,6,9,12,15,18,21,24,27,30,33,36};

    // Mayores / Menores
 int apuestaMenores[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
 int apuestaMayores[] = {19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};

 int *apuestasPosibles[] = {
    apuesta0,  apuesta1,  apuesta2,  apuesta3,  apuesta4,  apuesta5,
    apuesta6,  apuesta7,  apuesta8,  apuesta9,  apuesta10, apuesta11,
    apuesta12, apuesta13, apuesta14, apuesta15, apuesta16, apuesta17,
    apuesta18, apuesta19, apuesta20, apuesta21, apuesta22, apuesta23,
    apuesta24, apuesta25, apuesta26, apuesta27, apuesta28, apuesta29,
    apuesta30, apuesta31, apuesta32, apuesta33, apuesta34, apuesta35,
    apuesta36, 
    apuestaRojo, apuestaNegro, 
    apuestaPar, apuestaImpar,
    apuestaDocena1, apuestaDocena2, apuestaDocena3,
    apuestaColumna1, apuestaColumna1, apuestaColumna1,
    apuestaMenores, apuestaMayores
};