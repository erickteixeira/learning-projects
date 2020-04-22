/* ************************************************************************ *
 *    ex7.c, V0.1.170916.1724                                               *
 *    progama para analisar o maior de 10 numeros e apontar o maior e menor *
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
        int i,/*contagem da operacao*/
            maior,/*maior numero dentro os 10 que vao ser apresentados*/
            menor,/*menor numeor dentre os 10 que vao ser apresentados*/
            n;/*numero que vai ser apresentado pelo usuario*/

        for(i=1;i<=10;i++){
            printf("Digite o %d numero: ", i);
            scanf("%d", &n);
            if(i==1){
                maior=n;
                menor=n;
                    }
            else{
                if(n>maior){
                    maior=n;
                           }
                else{
                    if(n<menor){
                        menor=n;
                               }
                    }
                }
                          }
        printf("%d eh o menor numero e %d eh o maior numero\n", menor, maior);
        return 0;
};        
