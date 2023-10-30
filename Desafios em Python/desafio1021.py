#Runtime error

valor = float(input())

notas_moedas = [100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.1, 0.05, 0.01]

print("NOTAS:")
for i in range(6):
    qtd_notas = int(valor // notas_moedas[i])
    print(f"{qtd_notas} nota(s) de R$ {notas_moedas[i]:.2f}")
    valor -= qtd_notas * notas_moedas[i]

print("MOEDAS:")
for i in range(6, 12):
    qtd_moedas = int(valor // notas_moedas[i])
    print(f"{qtd_moedas} moeda(s) de R$ {notas_moedas[i]:.2f}")
    valor -= qtd_moedas * notas_moedas[i]
