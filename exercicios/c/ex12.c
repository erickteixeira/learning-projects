/* ************************************************************************ *
 *    ex12.c, V0.1.170929.2130                                              *
 *    algoritmo para matriz tridimensional                                  *
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

#define LMAX 2
#define CMAX 3
#define TMAX 4

int main(void)
{
    int l,
        c,
        t;
    char vc[LMAX][CMAX][TMAX];

    /*fazendo o vetor*/
    for(l=0; l<LMAX; l++)
        for(c=0; c<CMAX; c++)
            for(t=0; t<TMAX; t++)
                vc[l][c][t]='A'+l*CMAX*TMAX + c*TMAX +t;

    /*printando o vetor*/
    for(l=0; l<LMAX; l++)
        for(c=0; c<CMAX; c++)
            for(t=0; t<TMAX; t++)
                printf("vc[%d][%d][%d]= %c (%p)\n", l, c, t, vc[l][c][t], &vc[l][c][t]);

    return 0;
}
