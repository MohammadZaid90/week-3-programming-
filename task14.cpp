#include<iostream>
using namespace std;

void playingCat(int holi,int daysYear);

int main()
{
   int holi;
   int daysYear = 365;
   cout<<"Enter the number of holidays per year: ";
   cin>>holi;

   playingCat(holi,daysYear); 
}

void playingCat(int holi,int daysYear)
{
   int sub; 
   sub = daysYear - holi;

   int workingPlay; 
   workingPlay= sub*63;
    
   int holiPlay = holi*127;
   int sum = workingPlay+holiPlay;
   int totalPlay = 30000-sum;

       if(sum<30000)
         {
           int a;
           a = totalPlay%60;
           
           int b;
           b = totalPlay/60;

           cout<<"Tom sleeps well\n"<<b<<" hours and "<<a<<" minutes less play"<<endl;
         }
       
       if(sum>30000)
         {
           totalPlay = -1*totalPlay;

           int c;
           c = totalPlay%60;
   
           int d;
           d = totalPlay/60;

           cout<<"Tom will run away\n"<<d<<" hours and "<<c<<" minutes for play"<<endl;
         }
}
