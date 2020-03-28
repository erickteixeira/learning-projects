/* ************************************************************************ *
*    ex7.pl, V1.0                                                          *
*    programa para indicar casas adjacentes                                *
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
adjacentes(X,Y):-
    XL is X+1, XO is X-1, YN is Y+1, YS is Y-1,
    write('casa ao norte é:'),
    write((X,YN)),
    nl,
    write('casa ao sul é:'),
    write((X,YS)),
    nl,
    write('casa ao leste é:'),
    write((XL,Y)),
    nl,
    write('casa ao oeste é:'),
    write((XO,Y)).

