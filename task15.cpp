#include<iostream>
using namespace std;


void mainMenu();
void calculateAggregate(string nm1,float m1,float i1,float e1);
void compareMarks(string nameSt1,string nameSt2,float ecatMarksSt1,float ecatMarksSt2);

int main()
{
  mainMenu(); 
}


void mainMenu()
{
   string nm1,nameSt1,nameSt2;
   float m1,i1,e1,ecatMarksSt1,ecatMarksSt2;
   int a,b;

while(true)
 {
   cout<<endl;
   cout<<"****************************************************"<<endl;
   cout<<"*                                                  *"<<endl;
   cout<<"*        UNIVERSITY ADMISSION MANAGEMENT           *"<<endl;
   cout<<"*                    SYSTEM                        *"<<endl;
   cout<<"*                                                  *"<<endl;
   cout<<"****************************************************"<<endl;
  
   cout<<"Press 1 for Agrregate"<<endl;
   cout<<"Press 2 for compare Marks"<<endl;
   cin>>a;
   

        if(a == 1)
          {
            cout<<"1. Enter name 1: ";
            cin>>nm1;

            cout<<"2. Enter Matric Marks 1: ";
            cin>>m1;

            cout<<"3. Enter Inter Marks 1: ";
            cin>>i1;

            cout<<"4. Enter Ecat Marks 1: ";
            cin>>e1;

            calculateAggregate(nm1,m1,i1,e1);
          }
        
        if(a == 2)
          {
            cout<<"Enter the name of Student 1: ";
            cin>>nameSt1;

            cout<<"Enter the ecat marks for student 1: ";
            cin>>ecatMarksSt1;
     
            cout<<"Enter the name of Student 2: ";
            cin>>nameSt2;

            cout<<"Enter the ecat marks for student 2: ";
            cin>>ecatMarksSt2;

            compareMarks(nameSt1,nameSt2,ecatMarksSt1,ecatMarksSt2);
          }
 }
}


void calculateAggregate(string nm1,float m1,float i1,float e1)
{

   float aggre1,mpercen1,ipercen1,epercen1;



 
   
   mpercen1 = (m1/1100)*100;
   ipercen1 = (i1/550)*100;
   epercen1 = (e1/400)*100;
   

   cout<<endl;

   aggre1 = mpercen1*0.30+ipercen1*0.30+epercen1*0.40;
   
   cout<<"The aggregate of the student is: "<<aggre1<<endl;

}

void compareMarks(string nameSt1,string nameSt2,float ecatMarksSt1,float ecatMarksSt2)
{      
       cout<<endl;

       if(ecatMarksSt1 > ecatMarksSt2)
         {
           cout<<"Dear "<<nameSt1<<" your roll no is 1 due to more marks in ecat"<<endl;
           cout<<"Dear "<<nameSt2<<" your roll no is 2 due to more marks in ecat"<<endl;
         }

       if(ecatMarksSt2 > ecatMarksSt1)
         {
           cout<<"Dear "<<nameSt2<<" your roll no is 1 due to more marks in ecat"<<endl;
           cout<<"Dear "<<nameSt1<<" your roll no is 2 due to more marks in ecat"<<endl;
         }
}