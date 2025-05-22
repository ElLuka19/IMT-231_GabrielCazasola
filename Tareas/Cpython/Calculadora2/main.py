from operaciones import sumar
from operaciones import restar
from operaciones import multiplicacion
from operaciones import division
n=1
while n==1:
    print("Ingrese una opcion")
    print("1. Suma")
    print("2. Resta")
    print("3. Multipiclacion")
    print("4. Division")
    print("5. Salir")
    opcion= int(input("seleccione una opcion"))
    if opcion==5:
        break
    n1=int(input("ingrese el primer numero"))
    n2=int(input("ingrese el segundo numero"))
    match opcion:
        case 1:
            print("la suma de ", n1 , "y ", n2, "es: ", sumar(n1,n2))
        case 2:
            print("la resta de ", n1 , "y ", n2, "es: ", restar(n1,n2))
        case 3:
            print("la multiplicacio de ", n1 , "y ", n2, "es: ", multiplicacion(n1,n2))
        case 4:
            print("la division de ", n1 , "y ", n2, "es: ", division(n1,n2))
        case _:
            print("Opcion no valida")
   
