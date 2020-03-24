import math

angulo = float(input("favor informe o valor de um angulo: "))
a = math.sin(math.radians(angulo))
b = math.cos(math.radians(angulo))
c = math.tan(math.radians(angulo))

print("para o angulo {} temos que: seno = {}, o cosseno = {} e a tangente = {}".format(angulo, a, b, c))

