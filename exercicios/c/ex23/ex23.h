/***************************************************************************
 *   ex23.h                                   Version 20171207.211541      *
 *                                                                         *
 *   language questionnaire c                                              *
 *   Copyright (C) 2017         by Erick Antunes Teixeira                  *
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
 *   Erick Antunes Teixeira                                                *
 *   Email: erickantunest@gmail.com                                        *
 *   Webpage: www.upe.br                                                   *
 *   Phone: +55 (81) 98765-4321                                            *
 ***************************************************************************/

/* ---------------------------------------------------------------------- */
/* definitions */

#ifndef VERSION /* gcc -DVERSION="0.1.160612.142628" */
#define VERSION "20171207.211541" /**< Version Number (string) */
#endif

/* Debug */
#ifndef DEBUG /* gcc -DDEBUG=1 */
#define DEBUG 0 /**< Activate/deactivate debug mode */
#endif

#if DEBUG==0
#define NDEBUG
#endif
/* #include <assert.h> */ /* Verify assumptions with assert. Turn off with #define NDEBUG */ 

/** @brief Debug message if DEBUG on */
#define IFDEBUG(M) if(DEBUG) fprintf(stderr, "[DEBUG file:%s line:%d]: " M "\n", __FILE__, __LINE__); else {;}

/* limits */
#define SMAX 64 /**< String buffer */

/* ---------------------------------------------------------------------- */
/* globals */

char q1[SMAX]= {"1-To compare strings in the C language the following function / operator is used:\nA) =\nB)==\nC)strcpy\nD)strcmp\n"}
char q2[SMAX]= {"2-In language C, the strings "% d", "% f" and "% s" are usually associated with the use of the function:\nA)getch\nB)printf\nC)main\nD)void\nE)feof\n"}}
char q3[SMAX]= {"3-In C, the structure is basically the following sequence: first, a variable is initialized; second, a condition is checked; if the condition is satisfied then a piece of code is executed and then the variable is incremented or decremented according to the declaration of the code; then the condition is checked again and the cycle repeats as long as the condition is satisfied:\nT)true\nF)false\n"}
char q4[SMAX]= {"4-Considering programming language "C", for a variable store "floating-point numbers",should be declared as:\nA)real\nB)int\nC)numeric\nD)point\nE)float\n"}
char q5[SMAX]= {"5-Consider the C language statement: int a = sizeof (float) ;. The value stored in a is:\nA)2\nB)4\nC)6\nD)8\nE)10\n"}
char q6[SMAX]= {"Note that in the programming language C, the repetition structure is that, through control variable i, it traverses the interval from index 0 to index 32 inclusive, in the non-decreasing order:A)for(i=32; i>0; i--)\nB)for(i=32; i>-1; i--)\nC)i=0; i<33; i++\nD)for(i=0; i<32; i++\n"}
char q7[SMAX]= {"What is the srand() function for ?\nA)To make the generated values not repeat we need to use the srand function in order to initialize the rand function with a "seed" value so that a random value in the given range occurs. The srand function receives an integer unsigned argument, ie unsigned int.\nB)is used to generate random values. But if it is called without changing its seed, it will always generate the values drawn in the first run\n"}
char q8[SMAX]= {"What is the function in which you can use various types of cases ?\nA)switch()\nB)printf()\nC)sprintf()\nD)exchange()\nE)none of the previous\n"}
char q9[SMAX]= {"What is the library of input and output functions in C language ?\nA)<stdio.h>\nB)<stdlib.h>\nC)<string>\nD)<ctype.h>\n"}
char q10[SMAX]= {"what is the type that is used to store variables that will receive character ?\nA)int\nB)char\nC)double\nD)float\nE)none of the previous\n"}

/* ---------------------------------------------------------------------- */
/* prototypes */

void help(void); /**< Prints help information and exit */
void copyr(void); /**< Prints copyright information and exit */
void ex23_init(void);  /**< Initializes some operations before start */
void ex23_update(void); /**< Updates values during program cycle */


/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160615.020326      */


