def cdt3(n):
    contador = 0
    for num in range(1, n + 1):
        if num % 3 == 0 or num % 10 == 3:
            contador += 1
    print(f"Hay un total de {contador} numero/s entre 1 y {n} divisibles por 3 o que terminan en 3")
#Explicacion del codigo
#Use un for para el bucle, use un if donde si el numero ingresado por el usuario se puede divir entre 3 y el resultado da 0 se suma al contador y tambien
#si este mismo numero se divide entre 10 y da como resultado 3 se suma al contador y asi hasta que se llegue al numero ingresado