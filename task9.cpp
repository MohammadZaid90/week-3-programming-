#include<iostream>
using namespace std;

void equalCheck(int a,int b);

int main()
{

  int a,b;

  cout<<"Enter the First value: "<<endl;
  cin>>a;

  cout<<"Enter the second value: "<<endl;
  cin>>b;

        equalCheck(a,b);
}


void equalCheck(int a,int b)
{
   if(a == b)
     {
       cout<<"TRUE";
     }
   if(a != b)
     {
       cout<<"FALSE";
     }
}