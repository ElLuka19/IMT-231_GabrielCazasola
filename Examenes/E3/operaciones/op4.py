def fibonacciinv(n):
    if n == 0:
        return []
    elif n == 1:
        return [0]
    
    f = [0, 1]
    for i in range(2, n):
        f.append(f[i-1] + f[i-2])
    
    return f[-2::-1] + [0] if n > 1 else []