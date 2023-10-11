/*
Q-15.WAP to calculate the area of Circle,Regtangle and triangle using
   Function Overloading.
  => Regtangle: Area * Breadth
  => Triangle: 1/2 *Area * Breadth
  => Circle: Pi * Area *Area
*/  
#include <iostream>
using namespace std;


		float area(int length,int width)
		{	
		return length*width;	
		}
		float area(double base,double height)
		{
			return base*height*1/2;
		}
		float area(double radius)
		{
			return 3.14*radius*radius;
		}

int main()
{
	cout<<"area of rectangle:"<<area(3,5)<<endl;
	cout<<"area of triangle is:"<<area(0.5,5.5)<<endl;
	cout<<"area of circle is:"<<area(5.5);
	
	return 0;
}
