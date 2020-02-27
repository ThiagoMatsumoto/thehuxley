notasPortugues = []
notasMatematica = []
notasRedacao = []

contador = 0

while True:
    portugues = int(input())
    if (portugues < 0):
        break
    matematica = int(input())
    redacao = float(input())
    
    notasPortugues.append(portugues)
    notasMatematica.append(matematica)
    notasRedacao.append(redacao)

for i in range(len(notasPortugues)):
    if(notasPortugues[i] >= 40 and notasMatematica[i] >= 21 and notasRedacao[i] >= 7):
        contador += 1

print(contador)