/*Q-9.Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/
#include <iostream>
using namespace std;

class cricketer
{

public:
    string name;
    int totalruns,avgruns,bestperformance,nummatches;

    void inputdata()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;

        cout<<"Enter total runs:"<<endl;
        cin>>totalruns;

        cout<<"Enter no. of matches played:"<<endl;
        cin>>nummatches; 

        cout<<"Enter best score:"<< endl;
        cin>>bestperformance;
    }

    void calavg()
    {
        avgruns=totalruns/nummatches;
        cout<<"Average:"<<avgruns<<endl<<endl;
    }
};

class batsman : public cricketer
{

public:
    void display()
    {
    	cout<<"-----Cricketer detail-----";
        cout<<"Name:"<<name<<endl;
        cout<<"Total runs:"<<totalruns<<endl;
        cout<<"Best score:"<<bestperformance<<endl;
        cout<<"Average:"<<avgruns<<endl;
    }
};

int main()
{
    batsman player1;
    player1.inputdata();
    player1.calavg();
    player1.display();
    
    return 0;
}
