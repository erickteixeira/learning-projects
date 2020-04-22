e = input('Digite algo: ')

print("======= Dados da entrada =======")
print('o tipo primitivo que você digitou é {}'.format(type(e)))
print('Só tem espaços {}'.format(e.isspace()))
print('É um número {}'.format(e.isnumeric()))
print('É alfabético {}'.format(e.isalpha()))
print('É alfanúmerico {}'.format(e.isalnum()))
print('Está tudo em maiúsculo {}'.format(e.isupper()))
print('Está tudo em minúsculo {}'.format(e.islower()))
print('Está capitalizada (possue letras maiúsculas e minúsculas) {}'.format(e.istitle()))

