/* ************************************************************************ *
*    ex6.pl, V1.0                                                          *
*    agente dentro de um pequeno labirinto                                 *
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

%fatos
lab([" ############",
     " #          #",
     " # # # #### #",
     " #   # # #  #",
     " # # #   # ##",
     " # # # ######",
     " #   #  #   #",
     " # #### ### #",
     " # #      # #",
     " # ###### # #",
     " #   #      #",
     " ############"]).


imprime([lab]).
imprime([X|Y]):-
    writeln(X),
    imprime(Y).
init([1,1]).
obj([6,8]).
res(Pos,Pos,_,_).

%regras
main:-
    lab(Lab),
    init(In),
    obj(Ob),
    imprime(Lab),
    res(In,Ob,Lab,Resp),
    mostraresposta(Resp).

res(At,Obj,Lab,R):-
    tenta(At,Lab,R,Npos,Nres),
    res(Npos,Obj,Lab,Nres).

tenta([X,Y],Lab,R,_):-
    nth1(Y,Lab,Linha),
    nth1(X,Linha,Pos),
    Y1 is Y+1,
    nth1(Y1,Lab,Linha),
    nth1(X1,Linha,Pos).

