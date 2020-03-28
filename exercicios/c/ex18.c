/* ************************************************************************ *
 *    troco, V1.0                                                           *
 *    BRIEF_DESCRIPTION                                                     *
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

int main(void)
{
    float vproduto,/*valor do produto*/
          vpago,/*valor pago pelo cliente*/
          troco;/*subtracao do valor pago menos o valor do produto*/
    int i,/*contador*/
        q,/*valor auxiliar para a divisao*/
        cn10=0,cn5=0,cn2=0,cn1=0,cm50=0,cm25=0,cm10=0,cm05=0,cm01=0;

    printf("\n---algoritmo para troco---\n");
    printf("informe o valor do produto: \n");
    scanf("%f", &vproduto);
    printf("Informe o valor pago: \n");
    scanf("%f", &vpago);

    if(vpago<vproduto)
    {
        printf("valor do produto incompleto\n");
        return 0;
    }
    else
    {
        troco=vpago-vproduto;
        while(troco>0)
        {
            if(troco>=10)
            {
                cn10=cn10+1;
                troco=troco-10;
            }
            else 
            {
                if(troco>=5)
                {
                    cn5=cn5+1;
                    troco= troco-5;
                }
                else
                {
                    if(troco>=2)
                    {
                        cn2=cn2+1;
                        troco=troco-2;
                    }
                    else
                    {
                        if(troco>=1)
                        {
                            cn1=cn1+1;
                            troco=troco-1;
                        }
                        else
                        {
                            if(troco>=0.5)
                            {
                                cm50=cm50+1;
                                troco=troco-0.5;
                            }
                            else
                            {
                                if(troco>=0.25)
                                {
                                    cm25=cm25+1;
                                    troco=troco-0.25;
                                }
                                else
                                {
                                    if(troco>=0.10)
                                    {
                                        cm10=cm10+1;
                                        troco=troco-0.10;
                                    }
                                    else
                                    {
                                        if(troco>=0.05)
                                        {
                                            cm05=cm05+1;
                                            troco=troco-0.05;
                                        }
                                        else
                                        {
                                            if(troco>=0.01)
                                            {
                                                cm01=cm01+1;
                                                troco=troco-0.01;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("quantidade de notas de 10: %d, de notas 5: %d, de notas 2: %d, de moedas 1: %d, de moedas de 0.5: %d, de moedas de 0.25: %d, de moedas 0.10: 5d, de moedas 0.05: %d, de moedas de 0.01: %d \n", cn10, cn5, cn2, cn1, cm50, cm25, cm10, cm05, cm01);
            
    return  EXIT_SUCCESS;
}







    

