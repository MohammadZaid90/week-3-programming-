#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy (int x, int y);
void maze();
void playerMovement(int x,int y);

int main()
{
  int x;
  int y;

cout<<"Enter the value of X (X must b less than 20 or greater than 0)";
cin>>x;

cout<<"Enter the value of Y (Y must b less than 15 or greater than 0)";
cin>>y;

  system("cls");
  maze();
while(true)
{
  playerMovement(x,y);
   if(x<20)
     {
       x=x+1;
     }
   if(x==19)
     { 
       gotoxy(x-1,y);
       cout<<" ";
       x=2;
     }
 }
  
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

void playerMovement(int x,int y)
{
  gotoxy(x-1,y);
  cout<<" ";
  gotoxy(x,y);
  cout<<"P";
  Sleep(200);
}