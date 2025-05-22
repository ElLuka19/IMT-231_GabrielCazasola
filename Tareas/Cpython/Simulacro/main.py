from operaciones import cdt3
from operaciones import piramide
from operaciones import seriealternada
from operaciones import primo
from operaciones import palindro

def mostrar_menu():
    print("\n--- MENÚ DE OPCIONES ---")
    print("1. Contar números divisibles por 3 o terminan en 3")
    print("2. Imprimir pirámide de asteriscos")
    print("3. Generar serie alternada")
    print("4. Contar números primos")
    print("5. Verificar si un número es palíndromo")
    print("6. Salir del programa")
    return input("Seleccione una opción: ")

def main():
    while True:
        opcion = mostrar_menu()
        
        if opcion == "1":
            n = int(input("Ingrese un numero: "))
            cdt3(n)
            
        elif opcion == "2":
            n = int(input("Ingrese altura de la piramide "))
            piramide(n)
            
        elif opcion == "3":
            n = int(input("Ingrese cantidad de terminos "))
            seriealternada(n)
            
        elif opcion == "4":
            n = int(input("Ingrese un numero "))
            primo(n)
            
        elif opcion == "5":
            n = int(input("Ingrese numero a verificar"))
            if n > 0:
                print(f"El numero es palindromo? {'Sí' if palindro(n) else 'No'}")
            else:
                print("Ingrese un numero positivo porfavor")
                
        elif opcion == "6":
            print("Hasta luego :)")
            break
            
        else:
            print("Ingrese un numero entre el numero 1 al 6")

if __name__ == "__main__": 
    main()