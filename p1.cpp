//class to represent bank account
//member function to assign initial values, to deposit an amount,to withdraw amount ,display balance .
#include<iostream>
using namespace std;
class Bank
{private:
string n[20];//name
int a;//account number
string type[10];
float d;//deposit amount
float b=1000.00;//balance amount
float w;//withdraw amount

public:
Bank()
{
    string n="fidha";
    int a=123456;
    string type="savings";
    float b=1000.00;
    //float b1=(b+d);
}
void deposit()
{cout<<"Enter the amount to be deposited"<<endl;
cin>>d;
cout<<"The amount "<<d<<" is deposited in your account"<<endl;
cout<<"The new balance is:"<<(b+d)<<endl;
b=b+d;

}
void witdraw()
{cout<<"Enter the amount to be witdrwed"<<endl;
cin>>w;
cout<<"The amount"<<w<<"has been withdrwed from your  acccount"<<endl;
cout<<"The new balance is:"<<(b-w)<<endl;
b=b-w;
}
};

int main(){
Bank B1;
B1.deposit();
B1.witdraw();

return 0;
}
