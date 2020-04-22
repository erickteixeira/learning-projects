/* ************************************************************************ *
 *    ex9.c, V0.1.170916.1816                                               *
 *    jogo do bebe vinho, pato!                                             *
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
    long int i = 0;
    int x=0;
    char p;

    printf("Bem vindo ao jogo do pato\n");
    printf("Regras:\nPara numeros multiplos de 4 ou que terminarem em 4 digite p e os demais digite n\n");
    for (i=1;i<=4000000000;i++){

        printf("%d-", i);
        scanf("%s", &p);

        if((i%4==0)||(i%10==4)){
            switch(p)
            {
                case 'n' :
                    printf("Bebe vinho, pato!!\n");
                i=5000000000;
                case 'p' : 
                 break;
            }                   }
                              }
    return 0;
}

                      

