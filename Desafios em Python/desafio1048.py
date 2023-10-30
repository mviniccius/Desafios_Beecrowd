salario = float(input())

if salario <= 400:
    novo_salario = salario + (salario * 0.15)
    aumento = 15
    reajuste = salario * 0.15
    print(f"reajuste {reajuste} novo total {novo_salario}")
elif salario > 400 and salario <= 800:
    novo_salario = salario + (salario * 0.12)
    aumento = 12
    reajuste = salario * 0.12
elif salario > 800 and salario <= 1200:
    novo_salario = salario + (salario * 0.1)
    aumento = 10
    reajuste = salario * 0.1
elif salario > 1200 and salario <= 2000:
    novo_salario = salario + (salario * 0.07)
    aumento = 7
    reajuste = salario * 0.07
else:
    novo_salario = salario + (salario * 0.04)
    aumento = 4
    reajuste = salario * 0.04

print(f"Novo salario: {novo_salario}")
print(f"Reajuste ganho: {reajuste}")
print(f"Em percentual: {aumento} %")
