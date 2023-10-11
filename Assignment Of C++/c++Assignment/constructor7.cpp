//Q-7.Write a program of Addition,Subtraction,Division,Multiplication using Constructors.
#include<iostream>
using namespace std;

class Maths
{
    int a,b;
    
public:
    Maths(int x,int y)
        {
            a=x;
            b=y;
        }
        void Cal()
        {
            cout<<"The Addition of two number is: "<<a+b<<endl;
            cout<<"The Subtraction of two number is: "<<a-b<<endl;
            cout<<"The Multiplication of two number is: "<<a*b<<endl;
            cout<<"The Division of two number is: "<<a/b<<endl;
        }      
};
int main()
{
    Maths m1(30,10);
    m1.Cal();
    return 0;
}
