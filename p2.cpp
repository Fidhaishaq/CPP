//area and perimeter of the rectangle using inheritance 
#include<iostream>
using namespace std;
class Rectangle
{
public:
float length;
float breadth;
float a;
float perimeter;
void display ()
{cout<<"Enter the length"<<endl;
cin>>length;
cout<<"Enter the breadth"<<endl;
cin>>breadth;
}};
class Area:public Rectangle
{
    public:
    void p1()
    {cout<<" ****TO CALCULATE AREA**** "<<endl;}
    void print()
   { 
    a=(length*breadth);
   cout<<"The area of the rectangle with length "<<length<<" and breadth "<<breadth<<" is "<<a<<endl;
   }
};
   class Perimeter:public Rectangle
   {public:
   void p2()
    {cout<<" ****TO CALCULATE PERIMETER**** "<<endl;}
   
    void putdata()
   {perimeter=(2*length)+(2*breadth);
   cout<<"The perimeter of the recrtangle with length "<<length<<" and breadth "<<breadth<<" is "<<perimeter<<endl;
   }
   };
int main()
{Perimeter p1;
Area a1;
p1.p2();
p1.display();
p1.putdata();
a1.p1();
a1.display();
a1.print();
    return 0;
}

