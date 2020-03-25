# Calculadora usando funções e operadores condicionais

from math import sqrt

def soma(n1, n2):
    resultado = n1 + n2
    return resultado

def subtracao(n1, n2):
    resultado = n1 - n2
    return resultado

def multiplicacao(n1, n2):
    resultado = n1 * n2
    return resultado

def divisao(n1, n2):
    resultado = n1/n2
    return resultado

def raizquadrada(n1):
    resultado = sqrt(n1)
    return resultado

def elevado(n1, n2):
    resultado = pow(n1, n2)
    return resultado


print("Calculadora simples - escolha uma opção para continuar")
print("1- soma\n2- subtração\n3- multiplicação\n4- divisão\n5- raiz quadrada\n6- elevar um numero")
escolha = input("Sua escolha: ")

print("")
print((escolha.isnumeric()))
validacao = escolha.isnumeric()
if validacao == True:
    if int(escolha) == 1:
        n1 = float(input("informe o valor do primeiro numero: "))
        n2 = float(input("informe o valor do segundo numero: "))
        resultado = soma(n1,n2)
        print("{}".format(resultado))
    elif int(escolha) == 2:
        n1 = float(input("informe o valor do primeiro numero: "))
        n2 = float(input("informe o valor do segundo numero: "))
        resultado = subtracao(n1,n2)
        print("{}".format(resultado))
    elif int(escolha) == 3:
        n1 = float(input("informe o valor do primeiro numero: "))
        n2 = float(input("informe o valor do segundo numero: "))
        resultado = multiplicacao(n1,n2)
        print("{}".format(resultado))
    elif int(escolha) == 4:
        n1 = float(input("informe o valor do primeiro numero: "))
        n2 = float(input("informe o valor do segundo numero: "))
        resultado = divisao(n1,n2)
        print("{}".format(resultado))
    elif int(escolha) == 5:
        n1 = float(input("informe o valor do numero: "))
        resultado = raizquadrada(n1)
        print("{}".format(resultado))
    else:
        n1 = float(input("informe o valor do primeiro numero: "))
        n2 = float(input("informe o valor do segundo numero: "))
        resultado = elevado(n1,n2)
        print("{}".format(resultado))
else:
    print("opção invalida")



