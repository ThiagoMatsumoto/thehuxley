nums = input()
numsArray = nums.split(' ')
numA = float(numsArray[0])
numB = float(numsArray[1])
numC = float(numsArray[2])

triangulo = (numA*numC)/2
circulo = 3.14159*numC*numC
trapezio = ((numA + numB)*numC)/2
quadrado = numB*numB
retangulo = numA*numB

print("TRIANGULO: {0:.3f}".format(triangulo))
print("CIRCULO: {0:.3f}".format(circulo))
print("TRAPEZIO: {0:.3f}".format(trapezio))
print("QUADRADO: {0:.3f}".format(quadrado))
print("RETANGULO: {0:.3f}".format(retangulo))