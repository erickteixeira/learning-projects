/* ************************************************************************ *
*    ex4.pl, V0.1.170919.1541                                              *
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
hanoi(N) :- move(N,esquerda,direita,central).

move(1,X,Y,_) :- 
    write('mover da torre da '),
    write(X),
    write(' para '),
    write(Y),
    nl.

move(N,X,Y,Z) :-
    N >1,
    M is N-1,
    move(M,X,Z,Y),
    move(1,X,Y,_),
    move(M,Z,Y,X).

