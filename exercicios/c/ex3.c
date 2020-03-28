/* ************************************************************************ *
 *    ex3.c, v0.1.170831.2238                                               *
 *    progama mostrar o maior de tres numeros                               *
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
 *    Webpage: http://www.upe.br                                            *
 *    Phone: +55 (98) 98190-4079                                            *
 * ************************************************************************ *
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float n1,/*numero1*/
          n2,/*numero2*/
          n3;/*numero3*/

        printf("informe o primeiro numero: ");
        scanf("%f", &n1);
        printf("informe o segundo numero: ");
        scanf("%f", &n2);
        printf("informe o terceiro numero: ");
        scanf("%f", &n3);

        if (n1>n2)
        {
            if (n1>n3)
                printf("o maior entre os tres: ");
                scanf("%f", &n1);
            else
                printf("o maior entre os tres: ");
                scanf("%f", &n3);
        }
        else
        {
            if (n2>n3)
                printf("o maior entre os tres: ");
                scanf("%f", n3);
            else
                ("o maior entre os tres: ");
                scanf("%f", &n2);
        }

return EXIT_SUCCESS;
};

    

