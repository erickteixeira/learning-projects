/* ************************************************************************ *
 *    ex5.x, V0.1.170912.2332                                               *
 *    progama para apontar o maior de tres numeros usando conectivos        *
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
    int   n1,/*numero 1*/
          n2,/*numero 2*/
          n3;/*numero 3*/

    printf("Informe o valor do primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o valor do segundo numero: ");
    scanf("%f", &n2);
    printf("Informe o valor do terceiro numero: ");
    scanf("%f", &n3);

    if(n1>=n2 && n1>=n3){
        printf("n1 eh o maior entre eles\n");
                        }
        else{ 
            if(n2>=n1 && n2>=n3){
                printf("n2 eh o maior entre eles\n");
                                }
            else{
                printf("n3 eh o maior entre eles\n");
                }
            }   
    return EXIT_SUCCESS;
};
