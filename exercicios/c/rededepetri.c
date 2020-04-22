/* ************************************************************************ *
 *    ex2.c, V 1.0                                                          *
 *    programa que e um simulador de rede de petri em qualquer caso         *
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
 *    Webpage: http://github.com/erickteixeira                              *
 *    Phone: +55 (81) 99247-5938                                            *
 * ************************************************************************ *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 99

int main(void)
{
    int l, /* quantidade de lugares */
        t[MAX], /* quantidade de tokens e suas localizacoes */
        tt=0, /* quantidade total de tokens */
        ac, /* quantidade de arcos consumidores */
        vac[MAX], /* valor de rotulo e as ligacoes dos arcos consumidores */
        ae, /* quantidade de arcos de entrada */
        vae[MAX], /* valor do rotulo e as ligacoes dos arcos de entrada */
        i=0, /* contador auxiliar */
        aux=0, /* valor para auxiliar na atribuicao de valores para vetores */
        cont=2, /* contador auxiliar */
        cont2=2, /* contador auxiliar 2 */
        tr=0; /* quantidade de transicoes */

    /* scanf responsável por pegar a quantidade de lugares */
    scanf("%d", &l);
    //printf("quantidade de lugares: %d\n", l);

    for(i=1; i<=l; i++) /* for responsável por receber a quantidade de tokens em cada lugar */
    {
        scanf("%d", &aux);
        t[i]=aux;
        tt+=aux;
        printf("lugar: %d quantidade de tokens: %d\n", i-1, t[i]);
    }


    /* scanf responsável por receber a quantidade de arcos consumidores */
    scanf("%d", &ac);
    //printf("\nquantidade de arcos consumidores: %d\n", ac);

    for(i=1; i<=(ac*3); i++) /* for resposavel por pegar o valor do rotulo e as ligacoes de cada arco consumidor */
    {
        scanf("%d", &aux);
        vac[i]=aux;
        if(i%3==0)
            printf("valor do rotulo: %d\n", vac[i]);
        else
        {
            if(i==cont)
            {
                printf(" chegando na transicao: %d ", vac[i]);
                cont+=3;
                tr++;
            }
            else
                printf("saindo do lugar: %d", vac[i]);
        }
    }


    /* scanf responsável por receber a quantidade de arcos de entrada */
    scanf("%d", &ae);
    //printf("\nquantidade de arcos de entrada: %d\n", ae);

    for(i=1; i<=(ae*3); i++) /* for responsável por receber o valor do rotulo e as ligacoes de cada arco de entrada */
    {
        scanf("%d", &aux);
        vae[i]=aux;
        if(i%3==0)
            printf("valor do rotulo: %d\n", vae[i]);
        else
        {
            if(i==cont2)
            {
                printf(" chegando no lugar: %d ", vae[i]);
                cont2+=3;
            }
            else
                printf("saindo da transicao: %d", vae[i]);
        }
    }

    printf("quantidade de lugares: %d\n", l);
    printf("quantidade de tokens total: %d\n", tt);
    printf("quantidade de arcos consumidores: %d\n", ac);
    printf("quantidade de arcos de entrada: %d\n", ae);
    printf("quantidade total de transicoes: %d\n", tr);

    return 0;
}

