num1 = float(input("Digite um valor:\n"))
num2 = float(input("Digite um valor:\n"))
num3 = float(input("Digite um valor:\n"))
num4 = float(input("Digite um valor:\n"))
num5 = float(input("Digite um valor:\n"))

numNeg = 0

if(num1 < 0):
    numNeg += 1
if(num2 < 0):
    numNeg += 1
if(num3 < 0):
    numNeg += 1
if(num4 < 0):
    numNeg += 1
if(num5 < 0):
    numNeg += 1

print("Foram digitados {0} numeros negativos".format(numNeg))