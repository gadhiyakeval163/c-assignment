/*Q-5.define a class to represent a bank account.include the following member:
Data members:                       Data function:
A)Name of the depositer             A)To assign values
B)Account Number                    B)To deposited an amount
C)Type of Account                   C)To withdraw an amount after checking balance
D)Balance amount in the account     D)To display name and balance
*/
#include<iostream>
using namespace std;
class bank{

	int acc_no;
	char name[100],acc_type[100];
	float balance;
//details	
public:
void details()
{
	cout<<"\n-----Enter details-----\n";
	cout<<"\n Account No. ";
	cin>>acc_no;
	cout<<"\n Account Holder's Name:";
	cin>>name;
	cout<<"\n Account Type:";
	cin>>acc_type;
	cout<<"\n Balance:";
	cin>>balance;
}
//deposite
void deposite()
{
	int damt1;
	cout<<"\nEnter Deposite Amount :";
	cin>>damt1;
	balance+=damt1;
	cout<<"your total balance:"<<balance;
	
}
//withdraw
void withdraw()
{
	int wamt1;
	cout<<"\nEnter withdraw Amount :";
	cin>>wamt1;
	if(wamt1>balance)
	   cout<<"\nCannot Withdraw Amount";
	balance-=wamt1;
	cout<<"your total balance:"<<balance;
}
//display
void display()
{
	cout<<"\n-----display details-----\n";
	cout<<"\n Account No."<<acc_no;
	cout<<"\n Account Holder's Name:"<<name;
	cout<<"\n Account Type:"<<acc_type;
	cout<<"\n Account Balance:"<<balance;
}
	
};

int main()
{

	bank b1;
	b1.details();
	b1.deposite();
	b1.withdraw();
	b1.display();
	return 0;
}
