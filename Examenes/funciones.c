#include <stdio.h> 
#include "funciones.h"

int esPrimo(int n) 
{ if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) 
    { if (n % i == 0) return 0; 
    } return 1; 
}
int factorial(int n) { 
    int resultado = 1;
    for (int i = 1; i <= n; i++)
        resultado *= i;
    return resultado;
}
void contarDigitos(int n) 
{ int pares = 0, impares = 0; 
    for (int i = 1; i <= n; i++) 
    { if (i % 2 == 0) pares++; else impares++; } 
    printf("Cantidad de números pares: %d\n", pares); 
    printf("Cantidad de números impares: %d\n", impares); }

void mostrarMultiplosDeTres(int n) 
{ printf("Múltiplos de 3 entre 1 y %d:\n", n); for (int i = 1; i <= n; i++) 
    { if (i % 3 == 0) 
        { printf("%d ", i); } 
    } printf("\n"); 
}
