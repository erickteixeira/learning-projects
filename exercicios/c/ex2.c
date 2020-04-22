/* ************************************************************************ *
 *    ex2.c,v0.1.170831.2130                                                *
 *    progama para calcular media entre duas numeros                        *
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
          m;/*media*/

    printf("informe o valor do primeiro numero: ");
    scanf("%f", &n1);
    printf("informe o valor do segundo numero: ");
    scanf("%f", &n2);
    m =((n1+n2)/2.0);
    printf("a media entre os numeros:%f ",m);
    
    return EXIT_SUCCESS;
};  
