num1 = int(input())
num2 = int(input())
auxiliar = 0
soma = 0

if num1 > num2:
    auxiliar = num1
    num1 = num2
    num2 = auxiliar
    
if num1 < 0:
    num1 = 1
if num2 < 0:
    num2 = 1

while num1 <= num2:
    soma += num1
    num1 += 1

print(soma)