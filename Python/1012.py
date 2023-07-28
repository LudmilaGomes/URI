a, b, c = input().split()
a, b, c = float(a), float(b), float(c)

pi = 3.14159

triangle = (a * c) / 2
circle = pi * pow(c, 2)
trapezium = (1/2) * (a + b) * c
square = pow(b, 2)
rectangle = a * b

print('''TRIANGULO: %.3f
CIRCULO: %.3f
TRAPEZIO: %.3f
QUADRADO: %.3f
RETANGULO: %.3f''' % (triangle, circle, trapezium, square, rectangle))