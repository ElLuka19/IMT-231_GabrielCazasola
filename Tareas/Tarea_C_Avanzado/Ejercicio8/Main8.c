#include <stdio.h>
#include "funciones.h"

int main() {
    int num;
    while (1) {
        printf("Ingrese un numero positivo ");
        scanf("%d", &num);
        if (num <= 0) break;
        printf("Factorial de %d es %d\n", num, factorial(num));
    }
    return 0;
}
