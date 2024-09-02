//class polygon having width and height derive classes rectangle and triangle
#include<iostream>
using namespace  std;
class Polygon
{
public:
float width;
float width1;
float height;
float height1;
float r;
float t;
//public:
void Area()
{r=(width*height);
cout<<"The area of the rectangle with width "<<width<<" and height "<<height<<" is "<<r<<endl;
}
void area()
{t=(0.5*height1*width1);
cout<<"The area of the triangle with width "<<width1<<" and height "<<height1<< " is "<<t<<endl;
}
};
class Rectangle:public Polygon
{
public:
void putdata()
{cout<<"Enter the height of the rectangle"<<endl;
cin>>height;
cout<<"Enter the width of the rectangle "<<endl;
cin>>width;
}};
class triangle:public Polygon
{public:
    void getdata()
    {
        cout<<"Enter the width of the triangle "<<endl;
        cin>>width1;
        cout<<"Enter the height of the triangle"<<endl;
        cin>>height1;
    }
};

int main()
{ triangle t1;
Rectangle r1;
t1.getdata();
t1.area();
r1.putdata();
r1.Area();
 return 0;}