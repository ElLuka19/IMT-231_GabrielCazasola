#include <stdio.h>
#include "funciones.h"
int suma(int a,int b) {return a+b;}
int restar(int a,int b) {return a-b;}
int multiplicar(int a,int b) {return a*b;}

void menu(){
    int num, a,b;
    while (1){
        printf("\n1. Suma\n2. Resta\n3 Multiplicacion\n4 Salir\n num:");
        scanf("%d", &num);
        if (num==4) break;
        printf("ingrese los numeros ");
        scanf("%d %d", &a, &b);
        switch (num)
        {
        case 1: printf ("El resultado de la suma es %d\n", suma(a,b));
            break;
        case 2: printf ("El resultado de la resta es %d\n", restar(a,b));
            break;
        case 3: printf ("El resultado de la multiplicacion es %d\n", multiplicar(a,b));
            break;
        default: ("Syntax error \n");
        }
    }

}
