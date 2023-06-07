/*Exercise Practice Questions : 2 \\ Question No. 2*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/* Declaring The Enum As The Global */
enum etype {Laborer,Secretary,Manager,Accountant,Executive,Researcher};

int main(){

	etype selected;
	char choose;
	cout<<"Please Enter The First Letter Of The Following Words : "<<endl;
	
	cin>>choose;

	/* Switch one For the Input */

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
	
	/* Switch Two For The Output*/

	switch (selected)
	{
	case Laborer:
		cout<<"You Selected Laborer";
		break;
	case Secretary:
		cout<<"You Selected Secretary";
		break;
	case Manager:
		cout<<"You Selected Manager";
		break;
	case Accountant:
		cout<<"You Selected Accountant";
		break;
	case Executive:
		cout<<"You Selected Executive";
		break;
	case Researcher:
		cout<<"You Selected Researcher";
		break;
	}
}
