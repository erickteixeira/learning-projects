%#!/usr/bin/swipl -q -G64m -L64m -t main -f none -s
%  Uncomment the live above to run as executable prolog script
%  -q : Operate silently
%  -G : Set global stack
%  -L : Set local stack
%  -t main : Set goal to main
%  -f none : Do not use an initialization file
%  -s : Turn this file into an executable
%       prolog script (use chmod +x t1clpr.pl)
%

/***************************************************************************
 *   englishtest.pl                            Version 20170617.014017     *
 *                                                                         *
 *   An English Test to show how big is your vocabulary                     *
 *   Copyright (C) 2017         by Ruben Carlo Benante                     *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
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
 *   Ruben Carlo Benante                                                   *
 *   Email: rcb@beco.cc                                                    *
 *   Webpage: http://www.beco.cc                                           *
 *   Phone: +55 (81) 3184-7555                                             *
 ***************************************************************************/

/* ---------------------------------------------------------------------- */

/*

A list of questions in the form:

The synonym of love is:
a. like
b. left
c. life
d. live

Alternative 'a' is always right.
It should be shuffled randomly before presenting the question.

Source: https://www.arealme.com/vocabulary-size-test/en/

*/

list50([[synonym, love, [like, left, life, live]],
        [synonym, much, [many, less, rather, deal]],
        [synonym, child, [kid, chill, call, forget]],
        [synonym, large, [big, new, tiny, faded]],
        [synonym, deal, [sale, plea, recoup, claim]],
        [synonym, companion, [partner, fool, mirror, entrapment]],
        [synonym, trash, [junk, crack, squeeze, punch]],
        [synonym, above, [over, pierce, slow, work]],
        [synonym, specify, [designate, capitulate, arcane, assail]],
        [synonym, fall, [drop, spit, squeal, succeed]],
        [antonym, old, [new, tell, small, age]],
        [antonym, yes, [no, notice, yep, nice]],
        [antonym, come, [go, try, most, live]],
        [synonym, fly, [soar, hop, peer, drink]],
        [antonym, active, [passive, unable, inability, disagree]],
        [antonym, dangerous, [safe, silly, careless, sadness]],
        [antonym, distant, [near, disease, flex, obey]],
        [antonym, narrow, [broad, scold, punish, near]],
        [antonym, separate, [unite, weak, ordinary, break]],
        [antonym, normal, [extraordinary, doubt, standard, protracted]],
        [synonym, spade, [shovel, needle, club, oak]],
        [synonym, done, [finished, embellished, squeaked, talked]],
        [synonym, beg, [implore, recant, fancy, answer]],
        [synonym, lax, [negligent, mindful, neurotic, delectable]],
        [synonym, quash, [defeat, evade, enumerate, assist]],
        [synonym, minor, [trivial, crude, presidential, flow]],
        [synonym, drab, [lackluster, admissible, barbaric, spiffy]],
        [synonym, related, [pertinent, steadfast, alien, intrinsic]],
        [synonym, annoying, [obnoxious, facile, clinker, counter]],
        [synonym, incipient, [nascent, galling, chromatic, capricious]],
        [antonym, foul, [fair, repelling, nasty, dirty]],
        [antonym, compensate, [underpay, coordinate, extortion, hooking]],
        [antonym, acquiesce, [resist, gentle, inept, irascible]],
        [antonym, adamant, [vacillant, disdain, adjunct, aerate]],
        [antonym, alienate, [reunite, away, sluggish, aggressive]],
        [antonym, avulse, [suture, dry, aver, timid]],
        [antonym, catalyst, [prevention, current, damp, nadir]],
        [antonym, amorphous, [definite, allay, abridge, inimical]],
        [antonym, aggrieved, [exacerbate, recalcitrant, buoyant, warped]],
        [antonym, apologist, [critic, physicist, fidelity, canon]],
        [synonym, widow, [dowager, sire, fiend, spank]],
        [synonym, omen, [harbinger, opulence, mystic, demand]],
        [synonym, querulous, [fractious, fugacious, vapid, extemporaneous]],
        [synonym, hightail, [abscond, report, perturb, surmise]],
        [synonym, gargantuan, [titanic, promiscuous, virtuous, equestrian]],
        [antonym, avarice, [generosity, deny, dependence, yoke]],
        [antonym, alacrity, [sluggishness, intimate, provoker, soother]],
        [antonym, altruism, [egoism, apocrypha, noisome, extraneous]],
        [antonym, affinity, [antipathy, disperse, needy, warped]],
        [antonym, baneful, [salubrious, blighted, jejune, inveigled]]]).

/* ---------------------------------------------------------------------- */
%fatos
q1(1,1).
q2(2,2).
q3(3,3).
q4(4,4).
q5(5,1).
q6(6,2).
q7(7,3).
q8(8,4).
q9(9,1).
q10(10,2).
q11(11,3).
q12(12,4).
q13(13,1).
q14(14,2).
q15(15,3).
q16(16,4).
q17(17,1).
q18(18,2).
q19(19,3).
q20(20,4).
q21(21,1).

%regras
main :-
    writeln('Welcome to the English Vocabulary Test Program'),
    nl.

qs1(1,R):-
    write('[synonym of love? [like, left, life, live]'), write(R),
    not(R=2),
    not(R=3),
    not(R=4).

    






/* ----------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : PL config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc>       Version 20150620.224740 */

