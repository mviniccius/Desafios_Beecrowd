nome = str(input())
salary = float(input())
bonus = float(input())
comissao = bonus * 0.15
total = salary + comissao

print("TOTAL = R$ %.2f" % total)
