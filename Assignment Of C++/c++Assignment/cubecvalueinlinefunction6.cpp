//Q-6.Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
class line
{
 public:
 inline int mul(int a,int b)
 {
   return (a*b);	
 }
 public:
 inline int cube(int a)
 {
 	return (a*a*a);
 }	
};

int main()
{
	line obj;
	int no1,no2;
	
	cout<<"enter two value:\n";
	cin>>no1>>no2;
	cout<<"\nmultiplication value is:"<<obj.mul(no1,no2);
	cout<<"\ncubic value is:"<<obj.cube(no1);
	return 0;
}
