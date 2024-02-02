a, b, c = input().split()
a, b, c = int(a), int(b), int(c)

maior = a
if maior < b:
    maior = b
    if maior < c:
        maior = c
if maior < c:
    maior = c

print('%d eh o maior' % maior)