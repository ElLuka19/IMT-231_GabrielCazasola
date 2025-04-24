#include <stdio.h>
#include "funciones.h"

void mostrarcolor(Semaforo estado) {
    switch (estado) {
        case ROJO:
            printf("Semáforo en ROJO\n");
            break;
        case VERDE:
            printf("Semáforo en VERDE\n");
            break;
        case AMARILLO:
            printf("Semáforo en AMARILLO\n");
            break;
    }
}

Semaforo sgtcolor(Semaforo actual) {
    return (actual + 1) % 3;
}
