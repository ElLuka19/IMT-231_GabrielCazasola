#include <stdio.h>
#include "funciones.h"

int main() {
    Semaforo estado = ROJO;
    for (int i = 0; i < 10; i++) {
        mostrarcolor(estado);
        estado = sgtcolor(estado);
    }
    return 0;
}
