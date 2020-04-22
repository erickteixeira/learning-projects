/* ************************************************************************ *
 *    PROGRAM_NAME, VERSION                                                 *
 *    BRIEF_DESCRIPTION                                                     *
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
#include<time.h>
#include<unistd.h>

#define NUM 6
#define ITE 1000000/*iteracoes para o programa rodar*/

void sorteio(int v[]);

int main(void)/*esta funcao vai rodar o programa varias vezes e depois vai imprimir os resultados da probabilidade*/
{
    int d, i;
    int v[3]={0};
    float p[4];
    
    srand(time(NULL)+getpid());/*esta funcao vai garantir que os valores do rand nao se repitam*/
    for(i=0; i<ITE; i++)
    {
        sorteio(v);
    }
    for(d=0; d<3; d++)
    {
        p[d]=(float)v[d]*100/ITE;
    }
    p[3]=100-(p[0]+p[1]+p[2]);

    printf("\n----------A PROBABILIDADE DA PROVA CAIR----------\n");
    for(d=0; d<4; d++)
    {
        printf("a probabilidade de cair no dia %d eh de %f%%\n", i+1, p[d]);
    }
    return EXIT_SUCCESS;
}

void sorteio(int v[])/*esta funcao ira fazer um sorteio dos numeros em relacao aos dias */
{
    int c, e, r=0;
    
    for(c=0; c<3; c++)
    {
        e=rand()%NUM+1;
        if(e<=3)
            r++;
    }
    if(r==3)
        v[0]++;
    else
    {
        r=0;
        for(c=0; c<4; c++)
        {
            e=rand()%NUM+1;
            if(e<=4)
                r++;
        }
        if(r==4)
            v[1]++;
        else
        {
            r=0;
            for(c=0; c<2; c++)
            {
                e=rand()%NUM+1;
                if(e==6)
                    r++;
            }
            if(r==1)
                v[2]++;
        }
    }
    return;
}

