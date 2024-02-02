nome_vendedor = input()
salario_fixo = float(input())
total_vendas = float(input())

salario_final = salario_fixo + (total_vendas * .15)

print("TOTAL = R$ %.2f" % (salario_final))