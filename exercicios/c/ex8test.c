/* ************************************************************************ *
 *    ex8test.c, V0.1.170920.2054                                           *
 *    algoritmo do leilao                                                   *
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

int func30( int venc, int nj, int max, int mod, float med, char *nome);
/*venc=valor vencendor da rodada passada,
 * nj=numero de jogadores,
 * max=valor maximo jogado na rodada passada,
 * mod=moda da rodada passada,
 * med=media do numeros da rodada passsada,
 * *nome=nome do jogador(nesse ponto eh: ErickTeixeira) ou tambem pode ser o numero que o identifica o jogador(30)
 */

int main(void)
{
    int v,/*numero vencedor*/
        j,/*numero de jogadores*/
        mx,/*maximo valor jogado anteriormente*/
        md;/*moda da vez anterior*/
    float me;/*media da vez anterior*/
    char e[30]={"ErickTeixeira"};

    printf("Informe:\no numero vencedor da vez passada\na quantidade de jogadores\no maximo valor da vez passada\na moda da vez passada\na media da vez passada\n");
    scanf("%d, %d, %d, %d, %f", &v, &j, &mx, &md, &me);

    printf("%d\n", func30(v , j, mx, md, me, e));
} 

int func30(int venc, int nj, int max, int mod, float med, char *nome)
{
    if(venc== -1)
        strcpy(nome, "ErickTeixeira");
    if(venc>=3 && venc<=8)
        return venc - 2;
    else if(mod>=5 && mod<=8)
        return mod -1;
    if(max>5 && max<15)
        return max - mod;
    else if(med>5 && med<10)
        return mod -2;
}
