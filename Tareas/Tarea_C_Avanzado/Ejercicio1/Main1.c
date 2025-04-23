#include <stdio.h>
#include "funciones.h"

int main() {
    int num;
    while (1) {
        printf("Ingrese un número");
        scanf("%d", &num);
        if (num == -1) break;
        if (Par(num))
            printf("Es numero es par.\n");
        else
            printf("Es numero es impar.\n");
    }
    return 0;
}
