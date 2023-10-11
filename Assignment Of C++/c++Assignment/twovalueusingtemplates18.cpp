/*
Q-18.Write a program of to Swap the two values using Templates.
*/

#include <iostream>
using namespace std;
 template<class P>
 P swap(P num1,P num2)
 {
 	num1=num1+num2;
 	num2=num1-num2;
 	num1=num1-num2;
 	cout<<"after swapping values are:"<<num1<<"\t"<<num2;
 }
int main()
{
	swap(5,3);
	return 0;
}
