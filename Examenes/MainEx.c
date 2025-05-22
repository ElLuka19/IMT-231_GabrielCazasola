
#include <stdio.h> 
#include "funciones.h"

int main(void) 
{ int opcion, numero; 
    while (1) { printf("\n--- MENÚ ---\n"); printf("1. Verificar si un número es primo\n"); printf("2. Calcular el factorial de un número\n"); printf("3. Contar números pares e impares entre 1 y N\n"); printf("4. Mostrar múltiplos de 3 entre 1 y N\n"); printf("5. Salir del programa\n"); printf("Seleccione una opción: "); scanf("%d", &opcion);

switch(opcion) {
        case 1:
            printf("Ingrese un número positivo: ");
            scanf("%d", &numero);
            if (numero > 0) {
                if (esPrimo(numero))
                    printf("%d es un número primo.\n", numero);
                else
                    printf("%d no es un número primo.\n", numero);
            } else {
                printf("Número no válido. Debe ser positivo.\n");
            }
            break;

        case 2:
            printf("Ingrese un número positivo: ");
            scanf("%d", &numero);
            if (numero >= 0) {
                printf("El factorial de %d es %d\n", numero, factorial(numero));
            } else {
                printf("Número no válido. Debe ser no negativo.\n");
            }
            break;

        case 3:
            printf("Ingrese un número positivo: ");
            scanf("%d", &numero);
            if (numero > 0) {
                contarDigitos(numero);
            } else {
                printf("Número no válido. Debe ser positivo.\n");
            }
            break;

        case 4:
            printf("Ingrese un número positivo: ");
            scanf("%d", &numero);
            if (numero > 0) {
                mostrarMultiplosDeTres(numero);
            } else {
                printf("Número no válido. Debe ser positivo.\n");
            }
            break;

        case 5:
            printf("Gracias por usar el programa. ¡Hasta luego!\n");
            return 0;

        default:
            printf("Opción no válida. Intente nuevamente.\n");
    }
}
return 0;

}