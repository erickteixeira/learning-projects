/*correcao de: Erick Antunes Teixeira (eat)
 *aluno; lukas pereira ponce da silva
 *nota: 0
 *observacoes: o aluno possui letra legivel e boa indentacao. porem, nao conseguir desenvolver a atividade e cometeu um erro ao copiar o problema do quadro. onde, ele trocou de lugar a variavel char lab[MAX][MAX+1], na qual tal variavel deveria ser declarada como variavel global, ou seja, era para ter sido copiada depois dos defines. ademais, cabe ressaltar que o programa nao esta compilando*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define IY 1
#define IX 1
#define GY 5
#define GX 7

int tenta(int y, int x);
void imprime(void);

int main(void)
{
    tenta(IY, IX0);
    imprime();
    return 0;
}

int tenta(int Y, int x)
{
    char lab[MAX][MAX+1]=
    {"##########",
     "#        #",
     "# # #### #",
     "# # # #  #",
     "#   # ####",
     "# ### #  #",
     "#  #  ## #",
     "# ### ## #",
     "#   #    #",
     "##########",
    };

