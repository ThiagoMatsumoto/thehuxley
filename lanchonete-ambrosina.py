"""
sequencia de input:
    Produtos:
        numero de produtos a serem alterados
        código do produto
        descrição do produto
        preço do produto
        ...
    Pedido:
        código do produto
        quantidade a ser pedida
        ...
        0 -> finaliza o pedido
Output:
    multiplica as quantidades dos produtos com seus respectivos preços e soma-os. 

Loop para armazenar os produtos.
Loop para comparar o pedido com o produto.

"""

n = int(input())
codProdutos = []
descProdutos = []
precoProdutos = []
totalFinal = 0

for i in range(n):
    
    codigo = int(input())
    codProdutos.append(codigo)    
    descricao = input()
    descProdutos.append(descricao)    
    preco = float(input())
    precoProdutos.append(preco)

codigoPedido = 1 #mantem o pedido em aberto

while True:
    codigoPedido = int(input())
    if codigoPedido == 0: #se o input do usuário for 0, para o loop
        break
    totalPedido = float(input())
    for i in range(n):
        if (codigoPedido == codProdutos[i] and totalPedido > 0) :
            totalFinal += (totalPedido * precoProdutos[i])
   
print("%.2f"%totalFinal)