def piramide(n):
    for i in range(1, n + 1):
        espacios = " " * (n - i)
        asteriscos = "*" * (2 * i - 1)
        print(espacios + asteriscos)
#Explicacion del codigo
#Use un for para el bucle, para el codigo use 2 variables una para escribir los espacios y para que no se pase con los espacios siempe al valor de n se
#resta 1, en los asteriscos para la piramide, multiplique de esta manera(2*i-1) para que se siga con la forma de piramide