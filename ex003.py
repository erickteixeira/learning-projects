print("=== Calculadora simples ===")
print("favor escolha uma operacao para podermos efetuar")
print("1- adição\n2- subtração\n3- multiplicação\n4- divisão")
opcao = int(input("sua escolha: "))

if(opcao >= 1 and opcao <= 4):
    print("sua escolha foi {}".format(opcao))
    n1 = float(input("informe o valor do primeiro numero: "))
    n2 = float(input("informe o valor do segundo numero: "))
    if(opcao == 1):
        resultado = n1 + n2
    else:
        if(opcao == 2):
            resultado = n1 - n2
        else:
            if(opcao == 3):
                resultado = n1 * n2
            else:
                resultado = n1/n2
    print("resultado: {}".format(resultado))
else:
    print("opcao invalida")

