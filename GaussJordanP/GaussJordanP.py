 
''' generacion de matriz '''
def ImprimpirMatriz(M):
    for i in range(len(M)):
        print(M[i])

'''numero de ecaciones'''

n = input("Numero de ecuaciones: ")

filas = n
columnas = int(n) + 1

m = []
for i in range(0, int(filas)):
    a = [0] * columnas
    m.append(a)

'''llenado'''
for i in range(0, int(filas)):
    for j in range(0, columnas):
        ver = 'Valor elemento [' + str(i) + '][' + str(j) + ']: '
        m[i][j] = input(str(ver))


'''eliminacion de gauss jordan'''
for i in range(0, int(n)):
    for j in range(0, int(n)):
        if i != j:
            op = float(m[j][i]) / float(m[i][i])
            for k in range(0, columnas):
                m[j][k] = float(m[j][k]) - float(op) * float(m[i][k])
   
'''calculo de solucion'''
for i in range(0, int(n)):
    div = float(m[i][i])
    for j in range(0, int(columnas)):
        m[i][j] = float(m[i][j]) / div

'''solucion'''
print("Solucion")
for i in range(0,int(n)):
    print("x"+str(i)+" = "+str(m[i][int(n)]))
  
