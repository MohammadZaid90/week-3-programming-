#include<iostream>
using namespace std;
 
void reverse(string a);


int main()
{
    string a;
    cout<<"Enter true/false for reverse answer: ";
    cin>>a;
    reverse(a);
}


void reverse(string a)
{
   if(a == "true")
     { 
       cout<<"False";
     }

   if(a == "false")
     {
       cout<<"True";
     }
}