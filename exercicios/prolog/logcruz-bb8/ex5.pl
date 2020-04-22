%#!/usr/bin/swipl -q -G64m -L64m -t main -f none -s
%  Uncomment the live above to run as executable prolog script
%  -q : Operate silently
%  -G : Set global stack
%  -L : Set local stack
%  -t main : Set goal to main
%  -f none : Do not use an initialization file
%  -s : Turn this file into an executable
%       prolog script (use chmod +x exN.pl)
%

/***************************************************************************
 *   ex5.pl                                   Version 3.1.20170922.181838  *
 *                                                                         *
 *   Jogo de Logica - Revista Coquetel - Pag. 14-15                        *
 *   Copyright (C) 2017         by bb8 Group                               *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License.        *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   bb8 Group                                                             *
 *   Email: bb8group@gmail.com                                             *
 *   Webpage: http://www.upe.br                                            *
 *   Phone: +55 (98) 98190-4079                                            *
 ***************************************************************************/
 /**
 * @file ex5.pl
 * @ingroup GroupUnique
 * @brief Jogo de Logica - Revista Coquetel - Pag. 14-15
 * @details A simple example of PROLOG source documented with doxygen.
 *
 * @version 20170922.181838
 * @date 2017-09-22
 * @author bb8 group <<bb8group@gmail.com>>
 * @par Webpage
 * <<a href="http://www.beco.cc">www.beco.cc</a>>
 * @copyright (c) 2017 GNU GPL v2
 * @note This program is free software: you can redistribute it
 * and/or modify it under the terms of the
 * GNU General Public License as published by
 * the Free Software Foundation version 2 of the License.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.
 * If not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA. 02111-1307, USA.
 * Or read it online at <<http://www.gnu.org/licenses/>>.
 *
 * @todo Now that you have the template, hands on! Programme!
 * @warning Be carefull not to lose your mind in small things.
 * @bug This file right now does nothing usefull.
 *
 */

/* ---------------------------------------------------------------------- */
/* Files, dynamic clauses, modules, etc. */
/**
 * @ingroup GroupUnique
 * @brief Defining dynamic clauses
 * @param[in] A List of clauses
 * @retval TRUE on success.
 * @retval FALSE on fail.
 */
:- dynamic([verbosecounter/1]).

/* ---------------------------------------------------------------------- */

%fatos(homens, mulheres, motos, colocação)
marido(bruno).
marido(ivan).
marido(olavo).
marido(queiroz).
marido(vicente).

esposa(flavia).
esposa(diana).
esposa(luna).
esposa(raquel).
esposa(sheila).

moto(marley-steven).
moto(kaziwaki).
moto(dulcimer).
moto(hinda).
moto(victory).

colocacao(1).
colocacao(2).
colocacao(3).
colocacao(4).
colocacao(5).

%Regras
%inferencia:
goal :-
    tudodiferente(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo),
    tab(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo),
    writeln('\n Resultado\n'),
    writef('%w %w %w %w\n',[Bruno,BrEs,BrMo,BrCo]),
    writef('%w %w %w %w\n',[Ivan,IvEs,IvMo,IvCo]),
    writef('%w %w %w %w\n',[Olavo,OlEs,OlMo,OlCo]),
    writef('%w %w %w %w\n',[Queiroz,QuEs,QuMo,QuCo]),
    writef('%w %w %w %w\n',[Vicente,ViEs,ViMo,ViCo]).

%testa uma solucao para todas as regras
tab(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo):-
        regra1(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo),
        regra2(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo),
        regra3(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo),
        regra4(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo),
        regra5(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo),
        regra6(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo).

%regras
%regra 1: olavo e sua esposa competiram na moto dulcimer e terminaram em alguma colocacao apos flavia e seu marido.
%regra 2: O casal que competiu na moto kasiwaki terminou na segunda colocacao.
%regra 3: queiroz terminou na quinta colocacao e nao e' casado com raquel que competiu na moto hinda.
%regra 4: vicente e sua esposa terminaram na quarta colocacao.
%regra 5: luna e seu marido terminaram logo atras de bruno e diana.
%regra 6: sheila e seu marido competiram na moto victory.

%regra para diferenciar os fatos e nao atribuir o mesmo valor a duas variaveis diferentes
tudodiferente(Bruno,BrEs,BrMo,BrCo,Ivan,IvEs,IvMo,IvCo,Olavo,OlEs,OlMo,OlCo,Queiroz,QuEs,QuMo,QuCo,Vicente,ViEs,ViMo,ViCo):-
    marido(Bruno),
    marido(Ivan),
    not(Bruno=Ivan),
    marido(Olavo),
    not(Olavo=Bruno),
    not(Olavo=Ivan),
    marido(Queiroz),
    not(Queiroz=Bruno),
    not(Queiroz=Ivan),
    not(Queiroz=Olavo),
    marido(Vicente),
    not(Vicente=Bruno),
    not(Vicente=Ivan),
    not(Vicente=Olavo),
    not(Vicente=Queiroz),
    
    esposa(BrEs),
    esposa(IvEs),
    not(BrEs=IvEs),
    esposa(OlEs),
    not(OlEs=BrEs),
    not(OlEs=IvEs),
    esposa(QuEs),
    not(QuEs=BrEs),
    not(QuEs=IvEs),
    not(QuEs=OlEs),
    esposa(ViEs),
    not(ViEs=BrEs),
    not(ViEs=IvEs),
    not(ViEs=OlEs),
    not(ViEs=QuEs),
    
    colocacao(BrCo),
    colocacao(IvCo),
    not(BrCo=IvCo),
    colocacao(OlCo),
    not(OlCo=BrCo),
    not(OlCo=IvCo),
    colocacao(QuCo),
    not(QuCo=BrCo),
    not(QuCo=IvCo),
    not(QuCo=OlCo),
    colocacao(ViCo),
    not(ViCo=BrCo),
    not(ViCo=IvCo),
    not(ViCo=OlCo),
    not(ViCo=OlCo),

    moto(BrMo),
    moto(IvMo),
    not(BrMo=IvMo),
    moto(OlMo),
    not(OlMo=BrMo),
    not(OlMo=IvMo),
    moto(QuMo),
    not(QuMo=BrMo),
    not(QuMo=IvMo),
    not(QuMo=OlMo),
    moto(ViMo),
    not(ViMo=BrMo),
    not(ViMo=IvMo),
    not(ViMo=OlMo),
    not(ViMo=QuMo).

%Regra 1: Olavo e sua mulher (que competiram na moto Dulcimer) terminaram em algum lugar após Flávia e seu marido
regra1(_,flavia,_,BrCo,_,_,_,_,olavo,_,dulcimer,OlCo,_,_,_,_,_,_,_,_):-
    OlCo > BrCo.
regra1(_,_,_,_,_,flavia,_,IvCo,olavo,_,dulcimer,OlCo,_,_,_,_,_,_,_,_):-
    OlCo > IvCo.
regra1(_,_,_,_,_,_,_,_,olavo,_,dulcimer,OlCo,_,flavia,_,QuCo,_,_,_,_):-
    OlCo > QuCo.
regra1(_,_,_,_,_,_,_,_,olavo,_,dulcimer,OlCo,_,_,_,_,_,flavia,_,ViCo):-
    OlCo > ViCo.
%regra 2: O casal que dirigiu a moto Kasiwaki terminou na segunda colocacao.
regra2(_,_,kaziwaki,2,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_).
regra2(_,_,_,_,_,_,kaziwaki,2,_,_,_,_,_,_,_,_,_,_,_,_).
regra2(_,_,_,_,_,_,_,_,_,_,kaziwaki,2,_,_,_,_,_,_,_,_).
regra2(_,_,_,_,_,_,_,_,_,_,_,_,_,_,kaziwaki,2,_,_,_,_).
regra2(_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,kaziwaki,2).

%regra 3: queiroz terminou na quinta colocacao e nao e' casado com raquel que competiu na moto hinda.
regra3(_,raquel,hinda,_,_,_,_,_,_,_,_,_,queiroz,_,_,5,_,_,_,_).
regra3(_,_,_,_,_,raquel,hinda,_,_,_,_,_,queiroz,_,_,5,_,_,_,_).
regra3(_,_,_,_,_,_,_,_,_,raquel,hinda,_,queiroz,_,_,5,_,_,_,_).
regra3(_,_,_,_,_,_,_,_,_,_,_,_,queiroz,_,_,5,_,raquel,hinda,_).

%regra 4: vicente e sua esposa esposa terminaram na quarta colocacao
regra4(_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,vicente,_,_,4).

%regra 5: luna e seu marido terminaram logo atras de bruno e diana.
regra5(bruno,diana,_,BrCo,_,luna,_,IvCo,_,_,_,_,_,_,_,_,_,_,_,_) :-
    IvCo is (1+BrCo).
regra5(bruno,diana,_,BrCo,_,_,_,_,_,luna,_,OlCo,_,_,_,_,_,_,_,_) :-
    OlCo is (1+BrCo).
regra5(bruno,diana,_,BrCo,_,_,_,_,_,_,_,_,_,luna,_,QuCo,_,_,_,_) :-
    QuCo is (1+BrCo).
regra5(bruno,diana,_,BrCo,_,_,_,_,_,_,_,_,_,_,_,_,_,luna,_,ViCo) :-
    ViCo is (1+BrCo).

%regra 6: sheila e seu marido competiram na moto victory.
regra6(_,sheila,victory,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_).
regra6(_,_,_,_,_,sheila,victory,_,_,_,_,_,_,_,_,_,_,_,_,_).
regra6(_,_,_,_,_,_,_,_,_,_,sheila,victory,_,_,_,_,_,_,_,_).
regra6(_,_,_,_,_,_,_,_,_,_,_,_,_,sheila,victory,_,_,_,_,_).
regra6(_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,sheila,victory,_).

help :-
    writeln('ex5 - Jogo de Logica - Revista Coquetel - Pag. 14-15'),
    writeln('Usage:'),
    writeln('$swipl -s exN'),
    /* Stand alone scripts, invert: comment above, uncomment bellow. */
    /* writeln('$./exN'), */
    writeln('Clauses:'),
    writeln('  main.       Starts the main program.'),
    writeln('  copyright.  Shows version and copyright information.'),
    writeln('  version.    Returns version number.'),
    writeln('  help.       Shows this help message.'),
    writeln('  verbose.    Sets verbose level (cumulative).'),
    /* add more options here */
    writeln('  Exit status:'),
    writeln('    TRUE if ok'),
    writeln('    FALSE if some error occurred.'),
    writeln('  Todo:'),
    writeln('    Read options from OS'),
    writeln('  Author:'),
    writeln('    Written by bb8 group <bb8group@gmail.com>').

/* ---------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief copyright is det
 * @details Shows version and copyright information.
 * @return TRUE always.
 */
copyright :-
    writeln('ex5 - Version 20170922.181838'),
    writeln('Copyright (C) 2017 bb8 group <bb8group@gmail.com>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This is free software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.').
/* ----------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : PL config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc>       Version 20150620.224740 */

