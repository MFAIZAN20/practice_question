/*Exercise Practice Questions : 3 || Question No. 2 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class dataType{
	int day;
	int month;
	int year;
    public:
    void getdata()
    {
        char slach;
        cout<<"Please Enter The Date In This Form 1/3/2001 : ";
        cin>>day>>slach>>month>>slach>>year;
    }
    void showdata()
    {
	    cout<<"The Date is : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(){
	dataType date;
    date.getdata();
    date.showdata();
    return 0;
}