##Runtime Error
A = float(input())
B = float(input())
C = float(input())

areaTriangulo = (A * C) / 2
areaCirculo = 3.14159 * (C * C)
areaTrapezio = ((A + B) * C) / 2
areaQuadrado = B * B
areaRetangulo = A * B


print("TRIANGULO: %.3f"% areaTriangulo)
print("CIRCULO: %.3f"% areaCirculo)
print("TRAPEZIO: %.3f"% areaTrapezio)
print("QUADRADO: %.3f"% areaQuadrado)
print("RETANGULO: %.3f"% areaRetangulo)
