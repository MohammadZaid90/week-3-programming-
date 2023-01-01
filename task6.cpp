#include<iostream>
#include<windows.h>
using namespace std;

void printName();
void gotoxy (int x, int y);

int main()
{  
    printName();
}

void printName()
{
gotoxy(15,15);
cout<<"  ############         # ### #       ###########   #####   "<<endl;
gotoxy(15,16);
cout<<"            #        #         #          #        #    #   "<<endl;
gotoxy(15,17);
cout<<"           #       #            #         #        #      #  "<<endl;
gotoxy(15,18);
cout<<"          #        #            #         #        #       #  "<<endl;
gotoxy(15,19);
cout<<"         #         #            #         #        #        # "<<endl;
gotoxy(15,20);
cout<<"        #          #            #         #        #        # "<<endl;
gotoxy(15,21);
cout<<"       #           ##############         #        #        # "<<endl;
gotoxy(15,22);
cout<<"      #            #            #         #        #        # "<<endl;
gotoxy(15,23);
cout<<"     #             #            #         #        #       # "<<endl;
gotoxy(15,24);
cout<<"    #              #            #         #        #      # "<<endl;
gotoxy(15,25);
cout<<"   #               #            #         #        #     # "<<endl;
gotoxy(15,26);
cout<<"  ############     #            #    ###########   ###### "<<endl;



  
}

void gotoxy (int x, int y)
    {
         COORD coordinates;     
         coordinates.X = x;     
         coordinates.Y = y;     
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
    }
