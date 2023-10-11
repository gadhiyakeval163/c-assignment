// Q-4.WAP to create simple calculator using class
#include <iostream>
#include <math.h>
using namespace std;

class calculator
{
float a,b;
public:
	void result()
	{
		cout<<"Enter First Number: ";
		cin>>a;
		cout<<"Enter Second Number: ";
		cin>>b;
	}
	float add()
	{
		return a + b;
	}
	
	float sub()
	{
		return a - b;
	}
	float mul()
	{
		return a * b;
	}
	
	float div()
	{
		return a / b;
	}

};

int main()
{
	int ch;
	calculator c;	
		
	do
	{
		cout<<"\nEnter Choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			
			c.result();	
			cout<<"Result: "<<c.add()<<endl;
			break;
		case 2:
			
			c.result();
			cout<<"Result: "<<c.sub()<<endl;
			break;
		case 3:
			c.result();
			cout<<"Result: "<<c.mul()<<endl;
			break;
		case 4:
			c.result();
			cout<<"Result: "<<c.div()<<endl;
			break;
		}
		
	} while(ch>=1 && ch<=4);
	
	return 0;
}

