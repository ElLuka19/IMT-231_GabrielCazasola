def sumaprimos(n):
    if n == 1:
        return 0 
    suma = 1 
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            suma += i
            otro_divisor = n // i
            if otro_divisor != i:
                suma += otro_divisor
    return suma
