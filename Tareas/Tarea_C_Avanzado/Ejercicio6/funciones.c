#include <stdio.h>
#include "funciones.h"

void comparar(int a, int b) {
    if (a > b)
        printf("%d es mayor que %d\n", a, b);
    else if (b > a)
        printf("%d es mayor que %d\n", b, a);
    else
        printf("Los numeros son iguales.\n");
}
