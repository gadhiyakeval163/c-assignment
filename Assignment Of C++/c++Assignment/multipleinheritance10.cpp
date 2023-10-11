/*Q-10.Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/

#include<iostream>
using namespace std;
//person class
class person
{
		string name;
		int age;
	public:
		void setperson(int a, string n)
		{
			name=n;
			age=a;
		}
		void displayperson()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
		}			
};
//student details
class student: person
{
		float percentage;
	public:
		void setstudent(string n, int a, float p)
		{
			percentage=p;
			setperson(a,n);
		}
		void displaystudent()
		{
			cout<<"-----Student details:----- \n";
			displayperson();
			cout<<"Percentage is: "<<percentage<<endl;
		}
};
//teacher details
class  teacher: person
{
		float salary;
	public:
		void setteacher(string n, int a, float s)
		{
			salary=s;
			setperson(a,n);
		}
		void displayteacher(){
			cout<<"-----Teachers details:----- \n";
			displayperson();
			cout<<"Salary:"<<salary<<endl;
		}
};

int main()
{
	//student details
	student s;
	s.setstudent("raj",12,80);//student name/age/percentage
	s.displaystudent();
	//teacher details
	teacher t;
	t.setteacher("sanket",25,9000);// teacher name/age/salry
	t.displayteacher();
	
	return 0;
}
