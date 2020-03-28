/* ************************************************************************ *
 *    ex20.c, V1.0                                                          *
 *    jogo da velha com biblioteca ncurses                                  *
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
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<ncurses.h>

#define LMAX 7
#define CMAX 8

void init();
void tabuleiro(char map[LMAX][CMAX]);
void jogar(char map[LMAX][CMAX],int tecla, int vez, int njogadas, int e,int x, int y, char caracter);
void avaliar(int njogadas, char map[LMAX][CMAX]);
void sair();

int main(void)
{
    char map[7][8]={"#######",
                    "# | | #",
                    "#-----#",
                    "# | | #",
                    "#-----#",
                    "# | | #",
                    "#######",};
    int i=0, tecla, vez, njogadas=0, e=0, player=0, s=0;
    int x=3, y=3;
    char caracter='#';

    init();

    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK); 
    init_pair(3, COLOR_BLUE, COLOR_BLACK);
    init_pair(4, COLOR_YELLOW, COLOR_BLACK);

    jogar(map, tecla, vez, njogadas, e, x, y, caracter);

}

void init()
{
    initscr();
    cbreak();
    keypad(stdscr, TRUE);
    noecho();
    timeout(0);
    start_color();
    curs_set(0);
    
    return;
}

void tabuleiro(char map[LMAX][CMAX])
{
    int i, j;
    for(i=0; i<LMAX; i++)
        printw("%s\n",map[i]);

    for(i=0; i<LMAX; i++)
        for(j=0; j<CMAX; j++)
        {
            if(map[j][i]=='X')
                mvchgat(j, i, 1, A_BOLD, 3, NULL);
            if(map[j][i]=='O')
                mvchgat(j, i, 1, A_BOLD, 4, NULL);
        }

    return;
}

void jogar(char map[LMAX][CMAX],int tecla, int vez, int njogadas, int e,int x, int y, char caracter)
{
    while(njogadas<=9)
    {
        clear();
        tabuleiro(map);
        attron(COLOR_PAIR(1));

        if(vez==0)
            mvprintw(0,10,"---BEM VINDO AO JOGO DA VELHA---");
        else
            mvprintw(0,10,"-------JOGO DA VELHA EM C-------");

        if(vez%2==0)
        {
            e=1;
            attron(COLOR_PAIR(2));
            mvprintw(8,0,"vez do jogador 1");
        }
        else
        {
            e=2;
            attron(COLOR_PAIR(3));
            mvprintw(8,0,"vez do jogador 2");
        }

        tecla=getch();
        if(x>5 || x<1 || y>5 || y<1)
        {
            x=3;
            y=3;
        }

        switch(tecla)
        {
            case KEY_RIGHT:
                x=x+2;
                caracter='#';
                break;
            case KEY_LEFT:
                x=x-2;
                caracter='#';
                break;
            case KEY_UP:
                y=y-2;
                caracter='#';
                break;
            case KEY_DOWN:
                y=y+2;
                caracter='#';
                break;
            case ' ':
                switch(e)
                {
                    case 1:
                        if(map[y][x]!=' ')
                            continue;
                        else
                        {
                            map[y][x]='X';
                            njogadas++;
                            vez++;
                            break;
                        }

                    case 2:
                        if(map[y][x]!=' ')
                            continue;
                        else
                        {
                            map[y][x]='O';
                            njogadas++;
                            vez++;
                            break;
                        }

                }
        }
        mvprintw(y,x,"%c",caracter);
        refresh();
        usleep(20000);
        avaliar(njogadas, map);
    }
}

void avaliar(int njogadas, char map[LMAX][CMAX])
{

    if((map[1][1]=='X'&& map[1][3]=='X'&& map[1][5]=='X')||(map[3][1]=='X'&& map[3][3]=='X'&& map[3][5]=='X')||(map[5][1]=='X'&& map[5][3]=='X'&& map[5][5]=='X'))
        njogadas=12;
    if((map[1][1]=='X'&& map[3][1]=='X'&& map[5][1]=='X')||(map[1][3]=='X'&& map[3][3]=='X'&& map[5][3]=='X')||(map[1][5]=='X'&& map[3][5]=='X'&& map[5][5]=='X'))
        njogadas=12;
    if((map[1][1]=='X'&& map[3][3]=='X'&& map[5][5]=='X')||(map[5][1]=='X'&& map[3][3]=='X'&& map[1][5]=='X'))
        njogadas=12;

    if((map[1][1]=='O'&& map[1][3]=='O'&& map[1][5]=='O')||(map[3][1]=='O'&& map[3][3]=='O'&& map[3][5]=='O')||(map[5][1]=='O'&& map[5][3]=='O'&& map[5][5]=='O'))
        njogadas=13;
    if((map[1][1]=='O'&& map[3][1]=='O'&& map[5][1]=='O')||(map[1][3]=='O'&& map[3][3]=='O'&& map[5][3]=='O')||(map[1][5]=='O'&& map[3][5]=='O'&& map[5][5]=='O'))
        njogadas=13;
    if((map[1][1]=='O'&& map[3][3]=='O'&& map[5][5]=='O')||(map[1][5]=='O'&& map[3][3]=='O'&& map[5][1]=='O'))
        njogadas=13;

    if(njogadas==12)
        while(1)
        {
            clear();
            tabuleiro(map);
            mvprintw(10,0," O jogador 1 venceu!");
            mvprintw(11,0,"para sair digite Ctrl+c");
            refresh();
            usleep(50000);
        }
    if(njogadas==13)
        while(1)
        {
            clear();
            tabuleiro(map);
            mvprintw(10,0," O jogador 2 venceu!");
            mvprintw(11,0,"para sair digite Ctrl+c");
            refresh();
            usleep(50000);

        }
    if(njogadas>=9 && njogadas!=12 && njogadas!=13)
        while(1)
        {
            clear();
            tabuleiro(map);
            mvprintw(10,0," VELHA!! deu empate");
            mvprintw(11,0,"para sair digite Ctrl+c");
            refresh();
            usleep(50000);
        }

    return;
}

void sair()
{
    endwin();
}

