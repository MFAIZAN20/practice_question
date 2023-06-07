/*Exercise Practice Questions : 2 \\ Question No. 4*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

    /* For Part I */

enum etype {Laborer,Secretary,Manager,Accountant,Executive,Researcher};
    
    /* For Part II */

struct dataType{
	int day;
	int month;
	int year;
};

    /* For Part III */

struct employeeType
{
    int id_emp;
    float dollar;
};


int main()
{
	char choose,slach;
	etype selected;
    dataType data;
    employeeType emp;

    /* Part I Input Employee Role */

	cout<<"Please Enter The First Letter Of The Following Words : "<<endl;
	cin>>choose;
	switch (choose)
	{
	case 'L':
		selected = Laborer;
		break;
	case 'S':
		selected = Secretary;
		break;
	case 'M':
		selected = Manager;
		break;
	case 'A':
		selected = Accountant;
		break;
	case 'E':
		selected = Executive;
		break;
	case 'R':
		selected = Researcher;
		break;
	}
	
	/*Part II Input Joining Date Of The Employee */

    cout<<"Please Enter The Joining Date Format 1/3/2001 : ";
    cin>>data.day>>slach>>data.month>>slach>>data.year;

    /*Part II Input The Employee Id & Compensation */

    cout<<"Please Enter The Employee Id : "<<endl;
    cin>>emp.id_emp;

    cout<<"Please Enter The The Compensation : "<<endl;
    cin>>emp.dollar;

    /* Output Data */

    /* Part I Output */

    cout<<"The Employee Role is : ";
	switch (selected)
	{
	case Laborer:
		cout<<"Laborer";
		break;
	case Secretary:
		cout<<"Secretary";
		break;
	case Manager:
		cout<<"Manager";
		break;
	case Accountant:
		cout<<"Accountant";
		break;
	case Executive:
		cout<<"Executive";
		break;
	case Researcher:
		cout<<"Researcher";
		break;
	}

    /* Part II Output */

    cout<<"\nJoining Date : "<<data.day<<"/"<<data.month<<"/"<<data.year<<endl;
    
    /* Part III Output */
    
    cout<<"The Employee id : "<<emp.id_emp<<"\nEmployee Compensation : $ "<<emp.dollar<<endl;   
}

