n1 = float(input('Informe o valor da primeira nota: '))
n2 = float(input('Informe o valor da segunda nota: '))

m = (n1 + n2)/2

print('Sua media foi {}'.format(m))

if(m>=7):
    print('Parabéns você foi aprovado direto !!')
else:
    print('Você não passou direto')

