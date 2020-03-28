
palavrasecreta= "giraffe" # definindo a palavra para ganhar o game
guess = "" # iniciando a variavel que vai captar a resposta inicialmente vazia
guess_count=0 # contador de vezes 
guess_limit=3 # limite maximo que o contador pode atingir
out_of_guess=False # estado da opcao sem chances inicialmente falso

while guess !=palavrasecreta and not out_of_guess:
    if guess_count < guess_limit:
        guess = input("digite sua resposta: ")
        guess_count += 1
    else:
        out_of_guess=True

if out_of_guess:
    print("voce perdeu, esta sem chances")
else:
    print("parabens voce venceu")
