#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy (int x, int y);
void maze();

int main()
{
  int x;
  int y;

cout<<"Enter the value of X (X must b less than 20 or greater than 0)";
cin>>x;

cout<<"Enter the value of Y (Y must b less than 14 or greater than 0)";
cin>>y;

  system("cls");
  maze();
  gotoxy(x,y);
  cout<<"P";
  
}

void maze()
{
cout<<"####################"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"#                  #"<<endl;
cout<<"####################"<<endl;
}


void gotoxy (int x, int y)
    {
         COORD coordinates;     
         coordinates.X = x;     
         coordinates.Y = y;     
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
    }