def seriealternada(n):
    serie = []
    for i in range(1, n + 1):
        termino = i if i % 2 != 0 else -i
        serie.append(str(termino))
    print(", ".join(serie))
#Use el serie = [] para guardar temporalmente los valores generados
