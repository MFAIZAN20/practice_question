/*Exercise Practice Questions : 2 \\ Question No. 3*/
#include <iostream>
#include <string>
using namespace std;

struct dataType{
	int day;
	int month;
	int year;
};
int main(){
	dataType data;
	char slach;
	cout<<"Their is something intresting in this input\nI have declare the slash as char variable \nYou need to Entered The data With Slash\nEnter in this Format 1/3/2001 : ";
	
	cin>>data.day>>slach>>data.month>>slach>>data.year;

	cout<<data.day<<"/"<<data.month<<"/"<<data.year<<endl;
}
