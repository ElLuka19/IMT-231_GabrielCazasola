#include <stdio.h>
#include "funciones.h"

int main() {
    int num, contador = 0;
    while (1) {
        printf("Ingrese un numero");
        scanf("%d", &num);
        if (num == -1) break;
        if (esMultiploDeTres(num)) contador++;
    }
    printf("Total de multiplos de 3 %d\n", contador);
    return 0;
}
