/* ************************************************************************ *
*    ex5.pl, V0.1.170921.1558                                              *
*    algoritmo do coquetel                                                 *
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
%Trata-se de um corrida de moto que participaram cinco casais, onde pede-se a ordem de chegada,a composicao dos casais e a marca da moto.
%homens:Bruno, Ivan, Olavo, Queiroz, Vicente.
%mulheres:Diana, Flavia, Luna, Raquel, Sheila.
%motos:Dulcimer, Hinda, Kaziwaki, Marley-Steveson, Victory.
%colocao:Primeiro, Segundo, Terceiro, Quarto, Quinto.

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%regra 1: Olavo e sua mulher(que competiram na moto Dulcimer) terminaram em algum lugar apos flavia e seu marido.
%regra 2: O casal que dirigiu a moto Kaziwaki terminou na segunda colocacao.
%regra 3: Queiroz (que terminouna quinta colocacao) nao e casado com raquel (que guiou a moto hinda).
%regra 4: Vicente e sua mulher terminaram na quarta colocacao. 
%regra 5: Luna e seu marido ficaram logo atras de bruno e diana. 
%regra 6: Sheila e seu marido competiram na moto Victory.

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%fatos-homens, mulheres, motos, colocacao.
homem(bruno).
homem(ivan).
homem(olavo).
homem(queiroz).
homem(vicente).

mulher(diana).
mulher(flavia).
mulher(luna).
mulher(raquel).
mulher(sheila).

moto(dulcimer).
moto(hinda).
moto(kaziwaki).
moto(marley-steveson).
moto(victory).

colocacao(1).
colocacao(2).
colocacao(3).
colocacao(4).
colocacao(5).

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%inferencia:




























