/* ************************************************************************ *
*    ex2.pl, V0.1.170904.1120                                              *
*    Algoritmo para arvore genealogica                                     *
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
homem(manuel).
homem(joao).
homem(joaquim).
homem(severino).
homem(quinzim).

mulher(maria).
mulher(clara).
mulher(manoela).
mulher(maricota).
mulher(severina).
mulher(mano).
mulher(saveria).

pais(manuel, joaquim).
pais(maria, joaquim).
pais(joao, manoela).
pais(joao, maricota).
pais(joao, severino).
pais(clara, manoela).
pais(clara, maricota).
pais(clara, quinzim).
pais(joaquim,quinzim).
pais(joaquim, mano).
pais(severino, saveria).
pais(severina, saveria).

%regras
irmao(X, Y):-
    !,
    homem(X),
    pais(A,X),
    pais(A, Y),
    not(X=Y).
irma(X, Y):-
    !,
    mulher(X),
    pais(A, X),
    pais(A, Y),
    not(X=Y).
avoo(X, Y):-
    homem(X),
    pais(X, A),
    pais(A, Y).
avoa(X, Y):-
    mulher(X),
    pais(X, A),
    pais(A, Y).
mae(X, Y):-
    mulher(X),
    pais(X, Y).
pai(X, Y):-
    homem(X),
    pais(X, Y).
sobrinho(X, Y):-
    !,
    homem(X),
    pais(A, B),
    pais(A, Y),
    pais(B, X),
    not(Y=B).
sobrinha(X, Y):-
    !,
    mulher(X),
    pais(A, B),
    pais(A, Y),
    pais(B, X),
    not(Y=B).
tio(X, Y):-
    homem(X),
    pais(A, Y),
    pais(A, B),
    pais(B, Y),
    not(Y=B).
tia(X, Y):-
    mulher(X),
    pais(A, Y),
    pais(A, B),
    pais(B, Y),
    not(Y=B).
primo(X, Y):-
    homem(X),
    pais(A ,B),
    pais(A, C),
    pais(B, X),
    pais(C, Y),
    not(B=C).
prima(X, Y):-
    mulher(X),
    pais(A, B),
    pais(A, C),
    pais(B, X),
    pais(C, Y),
    not(B=C).
neto(X, Y):-
    homem(X),
    pais(Y, A),
    pais(A, X).
neta(X, Y):-
    mulher(X),
    pais(Y, A),
    pais(A, X).

