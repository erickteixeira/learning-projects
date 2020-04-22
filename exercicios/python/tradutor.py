
def tradutor(frase):
    traducao= ""
    for letra in frase:
        if letra.lower() in "aeiou":
            if letra.isupper():
                traducao = traducao + "G"
            else:
                traducao = traducao + "g"
        else:
            traducao = traducao + letra
    
    return traducao

print(tradutor(input("digite uma frase: ")))


