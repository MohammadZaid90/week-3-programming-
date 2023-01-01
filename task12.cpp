#include<iostream>
using namespace std;

void speeding(int a);

int main()
{
  int speed;

  cout<<"Enter the speed of the car: ";
  cin>>speed;

  speeding(speed);
}

void speeding(int a)
{
  if(a <= 100)
    {
      cout<<"Perfect!You're going good."<<endl;
    }
  
  if(a > 100)
    { 
      cout<<"Halt....YOU WILL BE CHALLENGED!!!"<<endl;
    }  
}


