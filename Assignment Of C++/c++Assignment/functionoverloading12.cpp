/*
Q-12.WAP to Mathematic operation like Addition,Subtraction,Multiplication,Division
  Of two number using diffrent parameters and Function Overloading.
*/

#include<iostream>
using namespace std;
 
 float area(double a,double b)
{
return a+b;
}
float area(int a,double b)
{
return a-b;
}
float area(int a,int b)
{
	return a*b;
}
float area(double a,int b)
{
return a/b;
}

int main()
{ 
   	cout<<"addition is :"<<area(2.5,2.5)<<endl;//add
	cout<<"subtraction is :"<<area(10,3.2)<<endl;//sub
	cout<<"multiplication is :"<<area(2,5)<<endl;//multi
	cout<<"division is :"<<area(2.5,2);//divide
	return 0;
}
