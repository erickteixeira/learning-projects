/* ************************************************************************ *
 *    ex11.c, V0.1.170928.1429                                              *
 *    Programa para vetor 2 por 3                                           *
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

#define PMAX 2/*linhas maximas*/
#define QMAX 3/*colunas maximas*/

int main(void)
{
    int p,/*linhas*/
        q;/*colunas*/
    char vc[PMAX][QMAX];

    for(p=0; p<PMAX; p++)
        for(q=0; q<QMAX; q++)
            vc[p][q]='A'+QMAX*p+q;

    for(p=0; p<PMAX; p++)
        for(q=0; q<QMAX; q++)
            printf("vc[%d][%d]=%c (%p) \n", p, q, vc[p][q], &vc[p][q]);

    return 0;
}
