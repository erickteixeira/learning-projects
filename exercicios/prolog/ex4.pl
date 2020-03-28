/* ************************************************************************ *
*    ex4.pl, V0.1.170919.1600                                              *
*    algoritmo para a torre de hanoi                                       *
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

hanoi0(N) :- write('Mover '), write(N),
         write(' discos da esquerda para o centro'),nl,
         write(' usando a direita como auxiliar:'),nl,
         moveXY0(N,esq,centro,dir).
moveXY0(0,_,_,_) :- !.
moveXY0(N,A,B,C) :- !, M is N-1,
         moveXY0(M,A,C,B),
         exibeMovXY0(A,B),get0(_),
         moveXY0(M,C,B,A).
exibeMovXY0(X,Y) :- !, nl, write('move um disco de '), write(X),
                           write(' para '), write(Y), nl.
