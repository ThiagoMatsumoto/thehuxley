auxiliar = 0
num1 = int(input())
num2 = int(input())
num3 = int(input())

if num1 > num2:
    auxiliar = num2 
    num2 = num1
    num1 = auxiliar

if num1 > num3:
    auxiliar = num3
    num3 = num1
    num1 = auxiliar

if num2 > num3:
    auxiliar = num3
    num3 = num2
    num2 = auxiliar

print (num1)
print (num2)
print (num3)