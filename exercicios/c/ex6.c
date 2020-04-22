/* ************************************************************************ *
 *    ex6.c, V0.1.170912.1622                                               *
 *    progama para implantação de conectivos logicos na progamação em c     *
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

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    a= (a!=0)==1;
    b= (b!=0)==1;
    if (a && b)
        printf("a e b verdadeiro\n");
    else
        printf("a e b falso\n");

    if (a || b )
        printf("a e b verdadeiro\n");
    else
        printf("a e b falso\n");

    if(!a)
        printf("não a verdadeiro\n");
    else 
        printf("não a falso\n");

    if((a || b ) && !(a && b ))
        printf("a ou-exclusivo b verdadeiro\n");
    else
        printf("a ou-exclusivo b falso\n");

    if (!a || b )
        printf("a implica b verdadeiro\n");
    else
        printf("a implica b falso\n");

    if (a==b)
        printf("a se somente se b verdadeiro\n");
    else
        printf("a se somente se b falso\n");

    return EXIT_SUCCESS;
}    
