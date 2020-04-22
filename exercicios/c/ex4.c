/* ************************************************************************ *
 *    ex4.c, V0.1.170903.1509                                               *
 *    Progama para calcular media e tambem analisar o numero de faltas      *
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
    float f,/*numero de faltas*/
          n1,/*primeira nota*/
          n2,/*segunda nota*/
          n3,/*nota final*/
          m,/*media de n1 e n2*/
          mf;/*somatorio final da m com n3*/

    printf("Informe o numero de faltas:\n ");
    scanf("%f", &f);
    if (f<=18){
        printf("Informe a primeira nota:\n ");
        scanf("%f", &n1);
        printf("Informe a segunda nota: \n");
        scanf("%f", &n2);
        
        m = (n1 + n2)/2.0;

        if (m>=7){
            printf("Parabens voce passou com media: \n", m);
            
        }else{
            printf("Informe a nota final \n");
            scanf("%f", &n3);

            mf = m + n3;

            if (mf < 10){
                printf("Voce foi reprovado na final\n");
            }else{
                printf("Voce passou na final \n");
            }
        }
    }
    else {
        printf("Reprovado por falta\n");

        return EXIT_SUCCESS;
    }
};


