#include<iostream>
using namespace std;

void flower(int a,int b,int c);

int main()
{
  float a,b,c;
  
  cout<<"Enter the number of red roses you want: ";
  cin>>a;  
 
  cout<<"Enter the number of white roses you want: ";
  cin>>b;

  cout<<"Enter the number of tulips you want: ";
  cin>>c;

  flower(a,b,c);
}

void flower(int a,int b,int c)
{
  float sum = (a*2.00)+(b*4.10)+(c*2.50);
  float dis;
  
  if(sum > 200)
    {
      dis = sum - (sum*20/100);
      cout<<"Origine price = "<<sum<<endl;
      cout<<"Discounted price = "<<dis<<endl;
      cout<<"You have to pay bill with discount"<<dis<<" dollars"<<endl;
    }
  
  if(sum <= 200)
    {
      cout<<"You have to pay bill without any discount due to less shopping: "<<dis<<endl;
    }       
}