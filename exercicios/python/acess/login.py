from Person import Person

# funcao para a insercao dos dados de um novo usuario no banco de dados
def novousuario(nomedeusuario, senha):
    arquivo = open("bancodedados.txt", "a")
    arquivo.write(nomedeusuario + "\n")
    arquivo.write(senha + "\n")
    arquivo.close()

# funcao para avaliar a entrada no banco de dados e verificar se ele consta no sistema
def validacao(nomedeusuario, senha):
    arquivo = open("bancodedados.txt", "r")
    contador = 0
    for linha in arquivo:
        if((nomedeusuario + "\n") == linha):
            contador += 1
        if((senha + "\n") == linha):
            contador += 1
    arquivo.close()
    if (contador == 2):
        return 1
    else:
        return 2

# inicializacao do programaca perguntando se o usuario possui conta
pergunta = input("voce possui conta ? [S-N]: ")

if(pergunta == "S" or pergunta == "s"):
    print("=== Controle de Acesso ===")
    Person.nomedeusuario = input("login: ")
    Person.senha = input("senha: ")
    validade = 0
    validade = validacao(Person.nomedeusuario, Person.senha)
    if validade == 1:
        print("seja bem vindo {}".format(Person.nomedeusuario))
    else:
        print("usuario nao reconhecido favor reiniciar o sistema")

elif(pergunta == "N" or pergunta == "n"):
    print("=== Criação de usuario ===")
    Person.nomedeusuario = input("informe o id de login desejado: ")
    Person.senha = input("crie uma senha: ")
    novousuario(Person.nomedeusuario, Person.senha)

else:
    print("possibilidade não valida favor reiniciar o programa")
