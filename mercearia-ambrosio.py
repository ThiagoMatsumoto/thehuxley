"""
Condições de desconto:
    quantidadeProdutos >= 15: 15% de desconto
    quantidadePaga >= 40: 15% de desconto

preços 
1 - 5,3
2 - 6
3 - 3,2
4 - 2,5

sequencia de input:
    código do produto
    quantidade comprada

output:
    R$ xx.00

obs: só um produto de cada vez
"""

produtoEntrada = int(input())
quantidade = int(input())
produtosArray = [1,2,3,4]
valores = [5.3, 6, 3.2, 2.5]
valorPago = 0

for i in range(len(valores)):
    if produtoEntrada == produtosArray[i]:
        valorPago = valores[i]

print(valorPago)

precoFinal = quantidade * valorPago

print(precoFinal)
print(quantidade)

if(precoFinal >= 40 or quantidade >= 15):
    precoFinal = (precoFinal*0.75)

print("R$ %.2f" % precoFinal)