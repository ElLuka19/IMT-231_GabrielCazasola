def primo(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def mostrarprimos(n):
    
    contador = 0
    numero = 2
    while contador < n:
        if primo(numero):
            print(numero)
            contador += 1
        numero += 1
