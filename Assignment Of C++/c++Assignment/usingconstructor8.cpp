//Q-8.Write a program of Addition,Subtraction,Division,Multiplication using Constructors.
#include<iostream>
using namespace std;

class Maths
{
    int x,y;
    
public:
    Maths(int a,int b)
        {
            x=a;
            y=b;
        }
        void Cal()
        {
            cout<<"The Addition of two number is: "<<x+y<<endl;
            cout<<"The Subtraction of two number is: "<<x-y<<endl;
            cout<<"The Multiplication of two number is: "<<x*y<<endl;
            cout<<"The Division of two number is: "<<x/y<<endl;
        }      
};
int main()
{
    Maths m1(50,10);
    m1.Cal();
    return 0;
}
