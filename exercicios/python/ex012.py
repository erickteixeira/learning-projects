vi = float(input('Qual o valor inicial do seu produto ? : '))
d = float(input('Qual o desconto que será aplicado nele ? : '))

vf = vi * (100 - d)/100

print('Seu produto com desconto de {} ficara custando {}'.format(d,vf))

