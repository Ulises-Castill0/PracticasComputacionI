import numpy as np
import time

from time import time

time0 = time()

'''numero de ecuaciones'''

n = int(input("Número de ecuaciones: ")) 
print("\n")

'''llenado de matriz'''

def LlenarM(M):
    m = np.zeros((n,n+1))
    for i in range(n):
        for j in range(n+1):
            m[i][j]=float(input(f"Valor elemento [{i}][{j}]: "))
    return m

'''eliminacion de gauss jordan'''

def GaussJordan(m,n):



    piv = 0
    for x in range(n-1):
        r = 1
        while m[x][x] == 0:
            if renglon == n:
                return math.nan
            IntercambiarRenglones(m, x,re)
            r += 1
        for i in range(x+1, n): 
            piv = m[i][x]/m[x][x]    
            m[i][x] = 0
            for j in range(x+1, n+1):
                m[i][j] -= piv*m[x][j]
 

  
    x = n -1
    while x > 0:
        for i in range(x):
            piv = m[i][x]/m[x][x]
            m[i][x] = 0
            m[i][-1] -= piv*m[x][-1]
        x -= 1
    for i in range(n):
        m[i][-1] /= m[i][i]
        m[i][i]= 1

'''intercambio de renglones'''

def IntercambiarRenglones(m,x,r):
    y = len(m)
    z = m[x]
    
    m[x]= m[x+r]
    m[x+r] = z

'''solucion'''

def ImprimirSolucion(s):
    print("Solucion:")
    y = len(s)
    for i in range(y):
        sf = float(s[i][-1])
        print(f"x{i} = {sf}")

Matriz = LlenarM(n)
GaussJordan(Matriz,n)
ImprimirSolucion(Matriz)


print(f"Tiempo: {time() - time0}")
