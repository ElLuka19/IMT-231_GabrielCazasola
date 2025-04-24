#include "funciones.h"
int contadorDigitos(int numero) {
    int contador = 0;
    do {
        numero /= 10;
        contador++;
    } while (numero > 0);
    return contador;
}