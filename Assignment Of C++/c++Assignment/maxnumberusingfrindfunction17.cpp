/*
Q-17.WAP to find the max number from given two numbers using 
Frined Function.
*/

#include <iostream>
using namespace std;

class operation
{
	int a,b;
	public:
		void get()
		{
			cout<<"enter first and second value";
			cin>>a>>b;
		}
		friend void max(operation);
};
void max(operation t)
{
	int max;
	max=t.a,t.b;
	
	cout<<"max number"<<max;
}
int main()
{
	operation obj;
	obj.get();
	max(obj);
	return 0;
}
