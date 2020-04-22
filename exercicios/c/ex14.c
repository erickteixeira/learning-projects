/* ************************************************************************ *
 *    ex14.c, V0.1.171003.1604                                              *
 *    algoritmo que calcula a probabilidade de um dado em relacao a dias    *
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
#include<string.h>
#include<time.h>
#include<unistd.h>

#define ITE 1000000
#define NUM 7

int main(void)
{
    int i, d, r;
    float v[6]={0};
    
    srand(time(NULL)+getpid());
    for(i=0; i<ITE; i++)
    {
        for(d=1; d<NUM; d++)
        {
            r=rand()%6+1;
            if(r<=d)
            {
                v[d]++;
                break;
            }
        }
    }
    for(d=1; d<NUM; d++)
    {
    printf("a probabilidade de cair no dia %d eh: %f\n", d, (v[d]/ITE)*100);
    }
    return EXIT_SUCCESS;
}

