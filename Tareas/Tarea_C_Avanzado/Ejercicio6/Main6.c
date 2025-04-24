#include <stdio.h>
#include "funciones.h"
int main() {
    int a, b;
    while (1) {
        printf("Ingrese los numeros ");
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;
        comparar(a, b);
    }
    return 0;
}