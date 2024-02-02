numero = float(input())

if numero <= 25 and numero >= 0:
    print("Intervalo [0,25]")
if numero <= 50 and numero > 25:
    print("Intervalo (25,50]")
if numero <= 75 and numero > 50:
    print("Intervalo (50,75]")
if numero <= 100 and numero > 75:
    print("Intervalo (75,100]")
if numero < 0 or numero > 100:
    print("Fora de intervalo")