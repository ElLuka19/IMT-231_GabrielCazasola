def palindro(num):
    num_str = str(num)
    return num_str == num_str[::-1]
#Explicacion del codigo:
#Aqui use la funcion num_str[::-1] para poder invertir en este caso el numero para poderlo comparar con el numero original
#ya que previamente lo cambie a un string (str) para poderlo usar con mayor facilidad