#include <stdio.h>
#include "funciones.h"
int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++)
        resultado *= i;
    return resultado;
}
