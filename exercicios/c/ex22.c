/* ************************************************************************ *
 *    ex22.c, V1.0                                                          *
 *    calculadora de fracoes e de decimais                                  *
 *                                                                          *
 *    Copyright (C) 2017 by Erick Antunes Teixeira                          *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Erick Antunes Teixeira <erickantunest@gmail.com>                      *
 *    Webpage: www.upe.br                                                   *
 *    Phone: +55 (98) 98190-4079                                            *
 * ************************************************************************ *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SMAX 64

typedef struct numeros
{
    int i; /* valor inteiro da expressao */
    int n; /* numerador da funcao */
    int d; /* denominador da funcao */
}tp_numeros;


int validar(char *s); /* funcao de validacao do que o usuario digitou */
int analisador(char s[SMAX], char *t, int tipo);/* funcao responsavel por analisar em qual caso a expressao vai se encaixar */
int calculadora(char s[SMAX], char *t, int tipo); /* funcao responsalvel por quebrar a expressao em tokens, receber os valores e calcular a expressao */ 
int operacoes(char *t, int operador); /* funcao que vai dizer a operacao que foi dita */

int main(void)
{
    int tipo=0, resultado=0;
    char s[SMAX];
    char *p, *t;
    printf("favor entre com uma expressao de no maxixo %d : ", SMAX-1);
    fgets(s, SMAX, stdin);

    if((p=strchr(s,'\n'))!=NULL)
        *p='\0';

    if(!validar(s))
        printf("\nnao contem ");
    printf("caracters validos\n");

    tipo=analisador(s,t,tipo);
    resultado=calculadora(s,t,tipo);

    printf("resultado: %d/1 \n", resultado);

    return EXIT_SUCCESS;
}

int validar(char *s) /* funcao responsavel por validar o que foi digitado */
{
    int i, valor;

    valor=strlen(s);

    for(i=0; i<valor; i++)
        if(!isdigit(s[i]) && ( s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' && s[i]!=' ' && s[i]!='.'))
            return 0;
    return 1;
}

int analisador(char s[SMAX], char *t, int tipo) /* funcao responsalvel por decidir em que tipo de caso a expressao vai se encaixar */
{
    int situacao=0, /* quantidade de tokens da situacao */
        loperador=0, /* em que token se encontra o operador */
        aux=4, /* valor auxiliar para os casos que apresentam a mesma quantidade de tokens, ele comeca com 4 para caso nao exista sinal na expressao a ser analisada */
        i=0, /* contador auxiliar para identificar a presenca de decimais na expressao */
        de=0; /* variavel para indicar a presenca de numeros decimais na expressao 1 sendo verdade e 0 sendo falso */ 

    t=strtok(s," /.");

    while(t!=NULL)
    {
        if(situacao==1)
            if(strcmp(t,"+")==0 || strcmp(t,"-")==0 || strcmp(t,"*")==0 || strcmp(t,"/")==0)
            {
                loperador=2; /* local do operador em operacoes com valores inteiros */   
                aux=1;
            }

        if(situacao==2)
            if(strcmp(t,"+")==0 || strcmp(t,"-")==0 || strcmp(t,"*")==0 || strcmp(t,"/")==0)
            {
                loperador=3; /* local do operador em operacoes com fracoes simples e tabem usado para quando se tem um numero decimal na frente */
                aux=2;
            }

        if(situacao==3)
            if(strcmp(t,"+")==0 || strcmp(t,"-")==0 || strcmp(t,"*")==0 || strcmp(t,"/")==0)
            {
                loperador=4; /* local do operador em operacoes com fracoes mistas */
                aux=3;
            }

        t=strtok(NULL, " /.");
        situacao++;
    }

    for(i=0; i<SMAX; i++)
    {
        if(strcmp(s,".")==0)
        {
            if(s[i]>loperador)
                de=2; /* caso seja encontrado a presenca de numeros decimais na expressao, mas apenas na segunda parte */
            else
                de=1; /* caso seja encontrado a presenca de numeros decimais na expressao */
        }
        else
            de=0; /* caso nao seja encontrado a presenca de numeros decimais na expressao */
    }

    /* nesta parte vai ocorrer a analise da expressao em relacao a quantidade de tokens e em qual token se encontra o operador */
    switch(situacao)
    {
        case 0: 
            tipo=10; /* caso ele nao de entrada de nada */
            break;
        case 1:
            tipo=11; /* caso ele de entrada apenas um inteiro */
            break;
        case 2:
            tipo=12; /* caso ele so entre com uma fracao simples */
            break;
        case 3:
            switch(aux)
            {
                case 1:
                    tipo=1; /* operacao com um valor inteiro seguido pelo operador e depois um inteiro */
                    break;
                case 4:
                    tipo=13; /* caso ele so entre com uma fracao mista, o valor 4 faz referencia a uma situacao especial em que nao foi dado operador */
                    break;
            }
        case 4:
            switch(aux)
            {
                case 1:
                    if(de==1)
                    {
                        tipo=17; /* operacao com inteiro na frente seguido pelo operador e depois um numero deciaml */
                        break;
                    }
                    else
                    {
                        tipo=2; /* operacao com um valor inteiro na frente seguido pelo operador e depois uma fracao simples */
                        break;
                    }
                case 2:
                    if(de==1)
                    {
                        tipo=14; /* operacao com um numero decimal na frente seguido pelo operador e depois um inteiro */
                        break;
                    }
                    else
                    {
                        tipo=3; /* operacao com uma fracao simples na frente seguido pelo operador e depois um valor inteiro */
                        break;
                    }
            }
            break;
        case 5:
            switch(aux)
            {
                case 1:
                    tipo=4; /* operacao com um valor inteiro na frente seguido pelo operador e depois uma fracao mista */
                    break;
                case 2:
                    if(de==2)
                        tipo=18; /* operacao com uma fracao simples seguido pelo operador e depois um numero decimal */
                    if(de==1)
                    {
                        tipo=15; /* operacao com um numero decimal na frente seguido pelo operador e depois uma fracao simples */
                        break;
                    }
                    else
                    {
                        tipo=5; /* operacao com uma fracao simples na frente seguido pelo operador e depois uma fracao simples */
                        break;
                    }
                case 3:
                    tipo=6; /* operacao com uma fracao mista na frente seguido pelo operador e depois um valor inteiro */
                    break;
            }
            break;
        case 6:
            switch(aux)
            {
                case 2:
                    if(de==1)
                    {
                        tipo=16; /* operacao com um decimal na frente seguido pelo operador e depois uma fraca mista */
                        break;
                    }
                    else
                    {
                        tipo=7; /* operacao com uma fracao simples na frente seguido pelo operador e depois uma fracao mista */
                        break;
                    }
                case 3:
                    if(de==1)
                    {
                        tipo=19; /* operacao com uma fraca mista na frente seguido pelo operador e depois um numero decimal */
                        break;
                    }
                    else
                    {
                        tipo=8; /* operacao com uma fracao mista na frente seguido pelo operador e depois uma fracao simples */
                        break;
                    }
            }
            break;
        case 7:
            tipo=9; /* operacao com uma fracao mista na frente seguido pelo operador e depois uma fracao mista */
            break;
    }

    return tipo;
}

int calculadora(char s[SMAX], char *t, int tipo) /* funcao responsavel por quebrar a expressao em tokens, receber os valores e calcular a expressao */
{
    int i=0, /* contador para auxiliar receber os valores dos tokens */
        operador=5, /* operador para dizer qual a operacao foi dita, ele vai iniciar com 5, pois dessa forma ele vai fazer referencia ao caso a expressao nao possua operador */
        resultado=0; /* resultado da expressao */
    tp_numeros i1, n1, d1, i2, n2, d2; /*o i representa valores inteiros, o n representa os numeradores e o d representa os denominadores*/

    t=strtok(s, " /.");

    while(t!=NULL)
    {
        /* aqui vai os valores vao ser preenchidos em relacao ao tipo de situacao */
        switch(tipo)
        {
            case 1: /* caso seja uma operacao entre dois valores inteiros */
                if(i==0)
                {
                    i1.i=atoi(t);
                    n1.n=0;
                    d1.d=1;
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    n2.n=0;
                    d2.d=1;
                    break;
                }
                break;
            case 2: /* caso seja uma operacao entre um inteiro e uma fracao simples */
                if(i==0)
                {
                    i1.i=atoi(t);
                    n1.n=0;
                    d1.d=1;
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=0;
                    n2.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d2.d=atoi(t);
                    break;
                }
                break;
            case 3: /* caso seja uma operacao entre uma fracao simples e um inteiro */
                if(i==0)
                {
                    i1.i=0;
                    n1.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d1.d=atoi(t);
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    n2.n=0;
                    d2.d=1;
                    break;
                }
                break;
            case 4: /* caso seja uma entre um inteiro e uma fracao mista */
                if(i==0)
                {
                    i1.i=atoi(t);
                    n1.n=0;
                    d1.d=1;
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n2.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d2.d=atoi(t);
                    break;
                }
                break;
            case 5: /* caso seja uma operacao entre duas fracoes simples */
                if(i==0)
                {
                    i1.i=0;
                    n1.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d1.d=atoi(t);
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    i2.i=0;
                    t=strtok(NULL, " /.");
                    n2.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d2.d=atoi(t);
                    break;
                }
                break;
            case 6: /* caso seja uma operacao entre uma fracao mista e um inteiro */
                if(i==0)
                {
                    i1.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n1.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d1.d=atoi(t);
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    n2.n=0;
                    d2.d=1;
                    break;
                }
                break;
            case 7: /* caso seja uma operacao entre uma fraca simples e uma fracao mista */
                if(i==0)
                {
                    i1.i=0;
                    n1.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d1.d=atoi(t);
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n2.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d2.d=atoi(t);
                    break;
                }
                break;
            case 8: /* caso seja uma operacao entre uma fracao mista e uma fracao simples */
                if(i==0)
                {
                    i1.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n1.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d1.d=atoi(t);
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    i2.i=0;
                    t=strtok(NULL, " /.");
                    n2.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d2.d=atoi(t);
                    break;
                }
                break;
            case 9: /* caso seja uma operacao entre duas fracoes mistas */
                if(i==0)
                {
                    i1.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n1.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d1.d=atoi(t);
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n2.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d2.d=atoi(t);
                    break;
                }
                break;
            case 10: /* caso nao seja dado nada */
                printf("nada para ser feito\n");
                break;
            case 11: /* caso seja dado apenas um inteiro */
                printf("nada para ser feito\n");
            case 12: /* caso seja dado somente uma fracao simples */
                i1.i=0;
                t=strtok(NULL, " /.");
                n1.n=atoi(t);
                t=strtok(NULL, " /.");
                d1.d=atoi(t);
                i2.i=0;
                n2.n=0;
                d2.d=0;
                break;
            case 13: /* caso seja dado somente uma fracao mista */
                i1.i=atoi(t);
                t=strtok(NULL, " /.");
                n1.n=atoi(t);
                t=strtok(NULL, " /.");
                d1.d=atoi(t);
                i2.i=0;
                n2.n=0;
                d2.d=0;
                break;
            case 14: /* caso seja uma operacao entre um numero decimal e um inteiro */
                if(i==0)
                {
                    i1.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n1.n=atoi(t)/10;
                    d1.d=1;
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }       
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    n2.n=0;
                    d2.d=1;
                    break;
                }
                break;
            case 15: /* caso seja uma operacao entre um numero decimal e uma fracao simples */
                if(i==0)
                {
                    i1.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n1.n=atoi(t)/10;
                    d1.d=1;
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=0;
                    n2.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d2.d=atoi(t);
                    i++;
                    break;
                }
                break;
            case 16: /* caso seja uma operacao entre um numero decimal e uma fracao mista */
                if(i==0)
                {
                    i1.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n1.n=atoi(t)/10;
                    d1.d=1;
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n2.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d2.d=atoi(t);
                    break;
                }
                break;
            case 17: /* caso seja uma operacao entre um inteiro e numero decimal */
                if(i==0)
                {
                    i1.i=atoi(t);
                    n1.n=0;
                    d1.d=1;
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n2.n=atoi(t)/10;
                    d2.d=1;
                    break;
                }
            case 18: /* caso seja uma operacao entre uma fracao simples e um numero decimal */
                if(i==0)
                {
                    i1.i=0;
                    n1.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d1.d=atoi(t);
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n2.n=atoi(t)/10;
                    d2.d=1;
                    break;
                }
                break;
            case 19: /* caso seja uma operacao entre uma fracao mista e um numero decimal */
                if(i==0)
                {
                    i1.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n1.n=atoi(t);
                    t=strtok(NULL, " /.");
                    d1.d=atoi(t);
                    i++;
                    break;
                }
                if(i==1)
                {
                    t=strtok(NULL, " /.");
                    operador=operacoes(t,operador);
                    i++;
                    break;
                }
                if(i==2)
                {
                    t=strtok(NULL, " /.");
                    i2.i=atoi(t);
                    t=strtok(NULL, " /.");
                    n2.n=atoi(t)/10;
                    d2.d=1;
                    break;
                }
                break;
        }
    }
    switch(operador)
    {
        case 1:
            resultado=((i1.i * d1.d + n1.n)/d1.d + (i2.i * d2.d + n2.n)/d2.d); /* caso a operacao seja uma adicao */
            break;
        case 2:
            resultado=((i1.i * d1.d + n1.n)/d1.d - (i2.i * d2.d + n2.n)/d2.d); /* caso a operacao seja uma divisao */
            break;
        case 3:
            resultado=((i1.i * d1.d + n1.n)/d1.d * (i2.i * d2.d + n2.n)/d2.d); /* caso a operacao seja uma multiplicacao */
            break;
        case 4:
            resultado=((i1.i * d1.d + n1.n)/d1.d / (i2.i * d2.d + n2.n)/d2.d); /* caso a operacao seja uma divisao */
            break;
        case 5:
            resultado=(i1.i * d1.d + n1.n)/d1.d; /* caso seja uma operacao de simplificacao */
            break;
    }
    return resultado;
}

int operacoes(char *t, int operador) /* funcao responsavel por capturar a operacao dita */
{
    if(strcmp(t,"+")==0)
        operador=1; /* caso seja uma operacao de adicao */
    if(strcmp(t,"-")==0)
        operador=2; /* caso seja uma operacao de subtracao */
    if(strcmp(t,"*")==0)
        operador=3; /* caso seja uma operacao de multiplicacao */
    if(strcmp(t,"/")==0)
        operador=4; /* caso seja uma operacao de divisao */

    return operador;
}

