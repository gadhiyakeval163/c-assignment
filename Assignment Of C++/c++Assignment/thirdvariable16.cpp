/*
Q-16.Write a program to swap the two numbers using friend function
withoutusing third variable
*/

#include <iostream>
using namespace std;

class operation {
	int a,b;
	public:
		void get()
		{
			cout<<"enter a and b value";
			cin>>a>>b;
		}
		friend void swap(operation t);
};
void swap(operation t)
{
	int swap;
	cout<<"before Swapping :"<<t.a<<"\t"<<t.b<<endl;
	 t.a=t.a*t.b;
	 t.b=t.a/t.b;
	 t.a=t.a/t.b;
	 cout<<"After Swapping :"<<t.a<<"\t"<<t.b<<endl;
}

int main()
{
	operation obj;
	obj.get();
	swap(obj);
	return 0;
}

