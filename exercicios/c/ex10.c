/* ************************************************************************ *
 *    ex10.c, V0.1.170925.1331                                              *
 *    algoritmo para criar um vetor com numeros aleatorios e ordena-los     *
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
#include<time.h> /* está biblioteca servirá para variem quando o programa for rodar*/

int main(void)
{
    int v[10];/*vetor que ira receber os valores aleatorios*/
    int i;/*contador*/
    int e;/*variavel de auxilio*/

    srand(time(NULL));/*usado para alterar os valores toda vez que o programa for rodar*/

    printf("Fora de ordem:\n");
    for (i=0; i<10; i++)
    {
        v[i]= rand()%100 + 1;
        printf("%d\n", v[i]);
    } 

    for (i=0; i<10; i++)
    {
        for(int r= i+1; r<10; r++)
        {
            if(v[r]>v[i])
            {
                e=v[r];
                v[r]=v[i];
                v[i]=e;
            }
        }
    }
    printf("\nEm ordem decrescente:\n");
    for(i=0; i<10; i++)
        printf("%d\n", v[i]);
    return EXIT_SUCCESS;
}    
