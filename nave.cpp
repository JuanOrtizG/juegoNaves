//** EJEMPLO COPIADO DE CODIGO FACILITO PARA APRENDER*/
//JUAN RODRIGO ORTIZ
//17-01-2020
//LUQUE - PARAGUAY

#include <iostream>
#include<windows.h>
#include <stdio.h>
#include<conio.h>
using namespace std;

void gotoxy(int x, int y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition (hCon, dwPos);
}

int main()
{
    int x=10,y=10;
    gotoxy(x,y); printf("*");

    bool game_over = false;
    while (!game_over){


        if (kbhit()){
            char tecla = getch();
            gotoxy(x,y); printf(" ");
            if(tecla=='j') x--;
            if(tecla=='l') x++;
            if(tecla=='i') y--;
            if(tecla=='k') y++;
            gotoxy(x,y); printf("*");
        }

        Sleep(30);

    }



return 0;

}
