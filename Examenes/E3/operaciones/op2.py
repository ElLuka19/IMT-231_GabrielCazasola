def gentriandulo(n):
  
    for i in range(1, n + 1):
        fila = []
        for j in range(i):
            letra = chr(65 + j)  
            fila.append(letra)
        print(" ".join(fila))