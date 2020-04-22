/* ************************************************************************ *
*    ex11.pl, V1.0                                                         *
*    programa para descriptografar um cofre com 4 digitos                  *
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

gerar(L) :-
    N3 is X,
    N1 s X+1,
    N4 is x+7,
    N2 is 7.

gera(L) :-
    member(L1),
    member(N1,L1),
    member(N2,L1),
    member(N3,L1),
    member(N4,L1),
    L=[N1,N2,N3,N4].

testar([N1,N2,N3,N4]) :-
    1 is mod 2.

cofre :-
    gera(L1),
    testar(L1),
    writef('%w %w\n %w %w %w\n', '[solucao:',L1]).
