from math import pow

pi = 3.14159
radius = int(input())

volume = (4/3) * pi * pow(radius, 3)
print('VOLUME = %.3f' % volume)