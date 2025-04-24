#include <stdio.h>
#include "funciones.h"
void sumanumeros(){
    int n, sumat = 0;
    while (1){
        printf("Ingrese numeros para sumar, (escribe un numero negativo para terminar la suma)" );
        scanf("%d", &n);
        if (n<0) break;
        sumat += n;
    }
    printf("La suma total es %d\n", sumat);
}