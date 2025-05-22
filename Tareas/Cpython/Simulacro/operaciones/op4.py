def primo(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

#Aqui verificamos si es primo o no el numero 

def contarprimos(n):
    contador = 0
    for num in range(2, n + 1):
        if primo(num):
            contador += 1
    print(f"Hay un total de {contador} numeros primos entre 1 y {n}")

#Aqui vamos haciendo el uso del contador para ver cuantos numeros primos tiene el numero ingresado
