/* ************************************************************************ *
 *    ex1.c,v0.1.170831.1950                                                *
 *    achar duas variáveis de um sistema linear                             *
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
 *    Nome Completo <erickantunest@gmail.com>                               *
 *    Webpage: http://www.upe.br                                            *
 *    Phone: +55 (98) 98190-4079                                            *
 * ************************************************************************ *
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int main(void) 
{

    float A, /*número A*/
          B, /*número B*/
          C, /*número C*/
          D, /*número D*/
          E, /*número E*/
          F, /*número F*/
          x, /*variavel x*/
          y; /*variavel y*/

    printf("Digite o número A:\n");
    scanf("%f", &A);

    printf("Digite o número B:\n");
    scanf("%f", &B);

    printf("Digite o número C:\n");
    scanf("%f", &C);

    printf("Digite o número D:\n");
    scanf("%f", &D);

    printf("Digite o número E:\n");
    scanf("%f", &E);

    printf("Digite o número F:\n");
    scanf("%f", &F);

    y = ((F - D * C/A))/((-D * B)/(A + E));

    x = (C - B * y)/A;

    printf("O valor de y é: %f\n",y);

    printf("O valor de x é: %f\n",x);

    return EXIT_SUCCESS;
};    

            
          

