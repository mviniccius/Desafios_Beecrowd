##Runtime Error
import math
X1 = float(input())
Y1 = float(input())
X2 = float(input())
Y2 = float(input())

soma = ((X2-X1) ** 2) + ((Y2-Y1) ** 2)
distancia = math.sqrt(soma)

print("%.4f" % distancia)
