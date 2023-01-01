#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy (int x, int y);

int main()
{
   system("cls");
   cout<<"This 0,0 point";
   gotoxy(15,16);
   cout<<"test";
}

void gotoxy (int x, int y)
    {
         COORD coordinates;     
         coordinates.X = x;     
         coordinates.Y = y;     
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
    }