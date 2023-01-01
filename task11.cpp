#include<iostream>
using namespace std;

void discout(string,int);

int main()
{
  string country;
  float ticket,discount;

while(true)
 {
  cout<<"Enter country name: ";
  cin>>country;

  cout<<"Enter ticket Price in dollars: ";
  cin>>ticket;

  discout(country,ticket);
 }
}


void discout(string country,int ticket)
{ 
  float discount;
 
  if(country == "pakistan")
    {
      discount = ticket - (ticket*5/100);
      cout<<" you have to pay "<<discount<<" dollars"<<endl;
    }  

  if(country == "ireland")
    {
      discount = ticket - (ticket*10/100);
      cout<<" you have to pay "<<discount<<" dollars"<<endl;
    } 

  if(country == "india")
    {
      discount = ticket - (ticket*20/100);
      cout<<" you have to pay "<<discount<<" dollars"<<endl;
    } 

  if(country == "england")
    {
      discount = ticket - (ticket*30/100);
      cout<<" you have to pay "<<discount<<" dollars"<<endl;
    }

  if(country == "canada")
    {
      discount = ticket - (ticket*45/100);
      cout<<" you have to pay "<<discount<<" dollars"<<endl;
    }    
}