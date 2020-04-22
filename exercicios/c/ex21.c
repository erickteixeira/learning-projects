/* ************************************************************************ *
 *    ex21.c, V1.0                                                          *
 *    calculadora de fracoes                                                *
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
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define BUFF 64
#define MAX 5

int validar(char *s);
int opcao(int n1, int op, int n2);

int main(void)
{
    int resultado[2]={0,0}, i=0;
    char s[BUFF], op;
    char *p, *t;

    printf("entre com uma expressao de no max %d : ", BUFF-1);
    fgets(s, BUFF, stdin);

    if((p=strchr(s,'\n'))!=NULL)
        *p='\0';

    if(!validar(s))
        printf("\nnao contem");
    printf(" caracters validos\n");
    if(!validar(s))

        t=strtok(s, " ");

    while(t!=NULL)
    {
        printf("%c\n", t);
        if(*t=='+')
        {
            op='+';
        }
        if(*t=='-')
        {
            op='-';
        }
        if(*t=='*')
        {
            op='*';
        }
        if(*t=='/')
        {
            op='/';
        }
        resultado[i]= opcao(t[0]-'0', (int)t[1], t[2]-'0');
        i++;
        t=strtok(NULL, " ");

        resultado[1]= opcao(resultado[0], (int)op, resultado[1]);

    }
    printf("resultado: %d\n", resultado[1]);
    return 0;

}

int validar(char *s)
{
    int i;
    int valor;

    valor = strlen(s);

    for(i=0; i<valor; i++)
        if(!isdigit(s[i]) && ( s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' && s[i]!=' '))
            return 0;

    return 1;
}

int opcao(int n1, int op, int n2)
{
    int resultado=0;

    if(op=='+')
        resultado=n1+n2;
    if(op=='-')
        resultado=n1-n2;
    if(op=='*')
        resultado=n1*n2;
    if(op=='/')
        resultado=n1/n2;

    return resultado;

}

