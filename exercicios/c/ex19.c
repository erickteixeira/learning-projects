/* ************************************************************************ *
 *    old.c, V1.0                                                           *
 *    jogo da velha com matriz                                              *
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

void tabuleiro(char casas2[3][3]);

int main(void)
{
    char casas[3][3]= { {'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'}, };
    char res;
    int cont_jogadas, l, c, vez=0, i, j;

    while(res=='y')
    {
        cont_jogadas=1;
        for(i=0; i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                casas[i][j]=' ';
            }
        }
        while(cont_jogadas<=9)
        {
            tabuleiro(casas);
            printf("digite a linha: \n");
            scanf("%i", &l);
            printf("digite a coluna: \n");
            scanf("%i", &c);
            
            if(l<1 || c<1 || l>3 || c>3)/*caso o usuario digite um valor invalido*/
            {
                l=0;
                c=0;
            }
            else
            {
                if(casas[l-1][c-1]!= ' ')/*caso o usario digite os valores de uma casa ja ocupada*/
                {
                    l=0;
                    c=0;
                }
                else
                {
                    if(vez%2==0)
                    {
                        casas[l-1][c-1]='X';
                    }
                    else
                    {
                        casas[l-1][c-1]='O';
                    }
                    vez++;
                    cont_jogadas++;
                }
            }
        }
        tabuleiro(casas);/*para mostrar a ultima casa ocupada*/
        printf("deseja jogar novamente ?[s-n]\n");
        scanf("%s", &res);
    }
    return 0;
}

void tabuleiro(char casas2[3][3])
{
    printf("  %c | %c | %c \n", casas2[0][0], casas2[0][1], casas2[0][2]);
    printf(" -----------\n");
    printf("  %c | %c | %c \n", casas2[1][0], casas2[1][1], casas2[1][2]);
    printf(" -----------\n");
    printf("  %c | %c | %c \n", casas2[2][0], casas2[2][1], casas2[2][2]);

}

