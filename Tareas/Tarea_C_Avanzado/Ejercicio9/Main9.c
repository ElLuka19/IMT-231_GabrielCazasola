#include <stdio.h>
#include "funciones.h"

int main() {
    int num;
    while (1) {
        printf("Ingrese un número (> 9 para continuar): ");
        scanf("%d", &num);
        if (num < 10) break;
        printf("Número invertido: %d\n", invertirNumero(num));
    }
    return 0;
}

