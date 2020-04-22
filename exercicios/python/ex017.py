from math import sqrt

ctop = float(input("informe o valor do cateto oposto: "))
ctad = float(input("informe o valor do cateto adjacente: "))

h = sqrt(pow(ctop, 2) + pow(ctad, 2))

print("o valor da hipotenusa é {}".format(h))

