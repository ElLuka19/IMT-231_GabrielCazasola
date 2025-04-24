#include <stdio.h>
#include "funciones.h"
int main(){
    int n;
    while(1){
        printf("Ingrese un numero ");
        scanf("%d",&n);
        if (n == 0) break;
        printf("El numero tiene %d digitos en total.\n", contadorDigitos(n));
    }
    return 0;
}