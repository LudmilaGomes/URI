import math

ponto1_x, ponto1_y = input().split(" ") # pega dois valores na mesma linha e atribui cada valor a cada variável
ponto1_x = float(ponto1_x)
ponto1_y = float(ponto1_y)

ponto2_x, ponto2_y = input().split(" ")
ponto2_x = float(ponto2_x)
ponto2_y = float(ponto2_y)

dist = ( pow(ponto2_x - ponto1_x, 2) + pow(ponto2_y - ponto1_y, 2) ) ** 0.5 # não usamos 'sqrt()', pois esta retorna um número complexo

print("%.4f" % (dist))