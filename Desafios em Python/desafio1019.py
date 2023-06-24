tempo = int(input())

segundos = tempo % 60
tempo = tempo / 60

minutos = tempo % 60
tempo = tempo / 60 
print(int(tempo),":",int(minutos),":",int(segundos))
