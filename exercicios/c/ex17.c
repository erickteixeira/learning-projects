#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char nome[50];
    int i=0,/*contador*/
        vet[0],vet[1],vet[2],vet[3],vet[4],vet[5],vet[6],vet[7],/*contador das letras*/
        soma,/*soma dos contadores dos numeros*/
        t,sum=0,remainder;/*auxiliares para a soma dos digitos caso o numero da soma sejam maior que */

    printf("informe seu nome, favor tudo junto e minusculo: ");
    scanf("%s", nome);

    for(i=0; i<=50; i++)
    {
        if((nome[i]=='a')||(nome[i]=='i')||(nome[i]=='j')||(nome[i]=='q')||(nome[i]=='y'))
            vet[0]++;
        if((nome[i]=='b')||(nome[i]=='k')||(nome[i]=='r'))
            vet[1]++;
        if((nome[i]=='c')||(nome[i]=='g')||(nome[i]=='l')||(nome[i]=='s'))
            vet[2]++;
        if((nome[i]=='d')||(nome[i]=='m')||(nome[i]=='t'))
            vet[3]++;
        if((nome[i]=='e')||(nome[i]=='h')||(nome[i]=='n')||(nome[i]=='x'))
            vet[4]++;
        if((nome[i]=='u')||(nome[i]=='v')||(nome[i]=='w'))
            vet[5]++;
        if((nome[i]=='o')||(nome[i]=='z'))
            vet[6]++;
        if((nome[i]=='f')||(nome[i]=='p'))
            vet[7]++;

    }
    vet[1]=vet[1]*2;
    vet[2]=vet[2]*3;
    vet[3]=vet[3]*4;
    vet[4]=vet[4]*5;
    vet[5]=vet[5]*6;
    vet[6]=vet[6]*7;
    vet[7]=vet=[7]*8;
    printf("seu nome eh: %s\n", nome);
    soma=vet[0]+vet[1]+vet[2]+vet[3]+vet[4]+vet[5]+vet[6]+vet[7];
    printf("sua soma eh: %d\n", soma);
    t=soma;
    if(t>9)
    {
        while(t!=0)
        {
            remainder=t%10;
            sum=sum+remainder;
            t=t/10;
        }
    }
    switch(t)
    {
        case 1: printf("aspectos positivos: lideranca, pionerismo, iniciativa, coragem, independencia.\n");
                printf("aspectos negativos: agressividade, egoismo, egocentrismo, inflexibilidade, individualismo\n.");
                break ;

        case 2: printf("aspectos positivos: tato, diplomacia, paciencia, cooperacao, companherismo.\n");
                printf("aspectos negativos: duvida, dependencia, submissao, passividade, inseguranca.\n");
                break;

        case 3: printf("aspectos positivos: criatividade, comunicacao, expressao, entusiasmo, sociabilidade.\n");
                printf("aspectos negativos: superficialidade, ostentacao, exagero, dispersao, imaturidade.\n");
                break;

        case 4: printf("disciplina, ordem, estabilidade, construcao, confiacam honestidade.\n");
                printf("aspectos negativos: rigidez, critica execessiva, inflexibilidade, inseguranca, metodico.\n");
                break;

        case 5: printf("aspectos positivos: liberdade, curiosidade, flexibilidade, versatilidade, inteligencia.\n");
                printf("aspectos negativos: ansiedade, indisciplina, instabilidade, impusividade, infidelidade.\n");
                break;

        case 6: printf("aspectos positivos: amor, beleza, equilibrio, familia, saude, justica.\n");
                printf("aspectos negativos: utopia, martir, ciumes, ressentimento, dificuldade em aceitar a realidade.\n");
                break;

        case 7: printf("aspectos positivos; espiritualidade, introspeccao, profundidade, perfeccionismo, controle da mente.\n");
                printf("aspectos negativos: solidao, pobreza, exigencia, excessiva, auto-critica, reclusao.\n");
                break;

        case 8: printf("aspectos positivos: lideranca, poder, organizacao, perseveranca, auto-confianca.\n");
                printf("aspectos negativos: ganacia, autoritarismo, teimosia, impaciencia, intolerancia.\n");
                break;

        default: printf("sem informacoes no hydrabox.\n");
                 break;
    }
    return 0;
}






