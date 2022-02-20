#include<iostream>
#include<conio.h>
using namespace std;

class emp
{
  protected:  int no1= 20;
              int no2= 10;
   public: void add()
         {
           cout<<"\nno1= "<<no1<<"\no2= "<<no2;
           cout<<"\naddition= "<< no1 + no2;
         }
};

class cal: public emp
{  public: void sub()
         {
           cout<<"\nsubtraction= " << no1 - no2;  
         }
};

int main()

{
   cal c1;
   c1.add();
   c1.sub();
   getch();
}
   
             