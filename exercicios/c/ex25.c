/***************************************************************************
 *   eux.c                                    Version 20171130.122700      *
 *                                                                         *
 *   euler x                                                               *
 *   Copyright (C) 2017         by Erick Antunes Teixeira                  *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Erick Antunes Teixeira                                                *
 *   Email: erickantunest@gmail.com                                        *
 *   Webpage: http://www.upe.br                                            *
 *   Phone: +55 (81) 98765-4321                                            *
 ***************************************************************************/

/*
 * Instrucoes para compilar:
 *   $gcc eu1.c -o eu1.x -Wall
 *        -Wextra -ansi -pedantic-errors -g -O0 -DDEBUG=1
 */

/*
enunciado:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

/*
 * proposta: fazer um programa que some todos os numeros multiplos de 3 com os numeros multiplos de 5 e subtraia com os multiplos 15 (pois este seria os multiplos que existiriam em ambas 
 * as somas e neste caso subtraindo 1 dos multiplos da soma so sobraria um dos multiplos de umas das somas)  */


/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* #include <time.h> */ /* Time and date functions */
/* #include <math.h> */ /* Mathematics functions */
/* #include <string.h> */ /* Strings functions definitions */
/* #include "libeco.h" */ /* I/O, Math, Sound, Color, Portable Linux/Windows */
/* #include "eu1.h" */ /* To be created for this template if needed */


/* limits */
#define MAXNUM 1000

/* ---------------------------------------------------------------------- */
/* prototypes */

int mult3(int n); /* funcao que calculara os multiplos de tres */
int mult5(int n); /* funcao que calculara os multiplos de cinco */
int mult15(int n); /* funcao que calculara os multiplos de quinze */


/* ---------------------------------------------------------------------- */
int main(void)
{
    int i=0; /* contador auxiliar */
    int s3=0; /* soma dos multiplos de tres */
    int s5=0; /* soma dos multiplos de cinco */
    int s15=0; /* soma dos multiplos de quinze */
    int resposta=0; /* a resposta do problema */

    for(i=0; i< MAXNUM; i++)
        if(mult3(i))
            s3+=i;

    for(i=0; i<MAXNUM; i++)
        if(mult5(i))
            s5+=i;

    for(i=0; i<MAXNUM; i++)
        if(mult15(i))
            s15+=i;
    
    resposta= (s3+s5) - s15; /* a resposta sera a soma dos multiplos de 3 com os multiplos de 5, menos os multiplos de 15 */

    printf("resposta: %d\n", resposta);

    return EXIT_SUCCESS;

}

/* add more functions here */

int mult3(int n)
{
    if(!(n%3)) /* se o resto da divisao do numero analisado for diferente de zero o programa retornara falso, caso contrario ele retornara verdadeiro 0 */
        return 1;
    return 0;

}

int mult5(int n)
{
    if(!(n%5)) /* se o resto da divisao do numero analisado for diferente de zero o programa retornara falso, caso contrario ele retornara verdadeiro */
        return 1;
    return 0;
}

int mult15(int n)
{
    if(!(n%15)) /* se o resto da divisao do numero analisado for diferente de zero o programa retornara falso, caso contrario ele retornara verdadeiro */
        return 1;
    return 0;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */


