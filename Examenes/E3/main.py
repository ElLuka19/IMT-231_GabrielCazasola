from operaciones import sumaprimos
from operaciones import gentriandulo
from operaciones import mostrarprimos
from operaciones import fibonacciinv

def mostrar_menu():
    print("\n--- MENU DE FUNCIONES ---")
    print("1. Calcular la suma de todos los divisores ")
    print("2. Generar un triángulo de caracteres con letras del alfabeto hasta una altura N.")
    print("3. Mostrar los primeros N números primos.")
    print("4. Generar la secuencia Fibonacci inversa.")
    print("5. Salir del programa")
    return input("Seleccione una opcion ")
def main():
    while True:
        opcion = mostrar_menu()
        
        if opcion == "1":
            n = int(input("Ingrese un numero "))
            if n > 0:
                print(f"Suma total: {sumaprimos(n)}")
            else:
                print("El numero debe ser positivo")
        elif opcion == "2":
            n = int(input("Ingrese la altura del triangulo "))
            if n > 0 and n <= 26:
                gentriandulo(n)
            else:
                print("La altura debe ser entre 1 y 26")
        elif opcion == "3":
            n = int(input("ingrese un numero "))
            mostrarprimos(n)
        elif opcion == "4":
            n = int(input("Ingrese un numero "))
            if n > 0:
                print("Secuencia Fibonacci inversa:")
                print(fibonacciinv(n))
            else:
                print("Debe ingresar un numero positivo")
            
        
        elif opcion == "5":
            print("Hasta luego la proxima :) ")
            break
            
        else:
            print("Ingrese un numero entre el numero 1 al 5 porfavor")

if __name__ == "__main__": 
    main()