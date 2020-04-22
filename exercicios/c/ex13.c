/* ************************************************************************ *
 *    ex13.c      , V0.1.171002.1450                                        *
 *    algoritmo para validacao de cpf                                       *
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

int main(void)
{
    int d1,/*digito 1 */
        d2,/*digito 2 */
        s=0,/*somatorio*/
        n,/*numero*/
        r,/*resultado*/
        c,/*variavel de auxilio para verificar se os digitos do cpf sao iguais*/
        i;/*contador*/
    char cpf[11];
    
    printf("-------VALIDADOR DE CPF-------\n");
    printf("Favor digite seu cpf (somente numeros): ");
    scanf("%s", &cpf);

    if(strlen (cpf)!=11)/*a funcao strlen vai medir o tamanho da string dada e analisar de acordo com a condicao*/
        printf("NUMERO PEQUENO OU GRANDE DEMAIS, INVALIDO!!!\n");
    else   
         for(c=0000000000; c<=99999999999; c=c+11111111111)
            if(c==cpf[11])
            {
                printf("TODOS OS DIGITOS SAO IGUAIS, INVALIDO!!!\n");
                break ;
            }
            else
            {
            /* encontrando o primeiro digito*/
            s=0;
            for(i=0; i<9; i++)
            {
                n=cpf[i]-48;
                s+=(n*(10-i));
            }
            r=11-(s%11);
            if((r==10)||(r==11))
                d1='0';
            else
                d1=r+48;

            /*encontrando o segundo digito*/
            s=0;
            for(i=0; i<10; i++)
            {
                n=cpf[i]-48;
                s+=(n*(11-i));
            }
            r=11-(s%11);
            if((r==10)||(r==11))
                d2='0';
            else
                d2=r+48;

            if((d1==cpf[9])&&(d2==cpf[10]))
                printf("CPF VALIDO!!!\n");
            else
                printf("CPF INVALIDO!!!\n");
            return 0;
            }
}
