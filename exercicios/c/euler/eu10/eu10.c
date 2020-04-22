/***************************************************************************
 *   eu10.c                                   Version 20171130.122700      *
 *                                                                         *
 *   euler 10                                                              *
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
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/


/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* limits */
#define MAXNUM 2000000

/* ---------------------------------------------------------------------- */
/* prototypes */

void analisadora(unsigned int n);

/* ---------------------------------------------------------------------- */
int main(void)
{
    unsigned int n=2; /* numero a ser analisado */

    analisadora(n);

    return EXIT_SUCCESS;

}

/* add more functions here */

void analisadora(unsigned int n)
{
    unsigned int i=2; /* auxiliar */
    unsigned int resultado=0;

    while(n<MAXNUM)
    {
        for(i=2; i<=n; i++)
            if(n%i==0)
                break;
        if(n==i)
            resultado+=n;

        n++;

    }
    printf("resultado: %ud\n", resultado);
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */


