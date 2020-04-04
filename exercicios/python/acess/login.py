from Person import Person
from datetime import *

# funcao principal para o programa
def inicializacao(pergunta):
    if(pergunta == "S" or pergunta == "s"):
        possuiconta()
    elif(pergunta == "N" or pergunta == "n"):
        criacaodeconta()
    else:
        print("possibilidade não valida favor reiniciar o programa")

#funcao para entrada de usuarios ja cadastrados
def possuiconta():
    print("=== Controle de Acesso ===")
    Person.nomedeusuario = input("login: ")
    Person.senha = input("senha: ")
    validade = validacao(Person.nomedeusuario, Person.senha)
    if (validade == 1):
        print("seja bem vindo {}".format(Person.nomedeusuario))
        horario_atual = datetime.now()
        print("Estamaos em {}\n".format(horario_atual))
    else:
        print("usuario nao reconhecido favor tente novamente\n")
        possuiconta()

#funcao para criacao de conta de novo usuarios
def criacaodeconta():
    print("=== Criação de usuario ===")
    Person.nomedeusuario = input("informe o id de login desejado: ")
    vdelogin = verificarlogin(Person.nomedeusuario)
    if(vdelogin == 1):
        print("nome de usuario ja existente, favor colocar outro id")
        criacaodeconta()
    else:
        Person.senha = input("crie uma senha: ")
        novousuario(Person.nomedeusuario, Person.senha)

# funcao criada para avaliar se o nome de usuario ja esta sendo usado
def verificarlogin(nomedeusuario):
    arquivo = open("bancodedados.txt", "r")
    for linha in arquivo:
        if((nomedeusuario + "\n") == linha):
            arquivo.close()
            return 1
        else:
            arquivo.close()
            return 2

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

#################################################################################

while(1):
    pergunta = input("voce possui conta ?\nS - sim\nN - Não\nE - exit\n")
    if(pergunta == "E" or pergunta == "e"):
        break
    else:
        inicializacao(pergunta)

