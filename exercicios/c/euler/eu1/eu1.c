/***************************************************************************
 *   eu1.c                                    Version 20171130.122700      *
 *                                                                         *
 *   euler 1                                                               *
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
enununciado:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/


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

int mult35(int n);


/* ---------------------------------------------------------------------- */
int main(void)
{
    int i; /* general index */
    int ac=0; /* acumulador */

    for(i=0; i<MAXNUM; i++)
        if(mult35(i))
            ac+=i;
    printf("acumulado: %d\n", ac);

    return EXIT_SUCCESS;

}

/* add more functions here */

int mult35(int n)
{
    if(!(n%3) || !(n%5))
        return 1;

    return 0;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */


