
op = print((input("favor informar a transformção que deseja fazer\n1- C=>F\n2- C<=F\nOpção:")))
c = float(input("favor informe temperatura em celcius: "))
f = float(input("favor informe a kevin: "))

if (op == 1):
    print(float((c*9)/5 + 32) + "graus")
else:
    print(float((f-32)*5/9) + "graus")
          
