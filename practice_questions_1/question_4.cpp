#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    double salary,fed_tax,state_tax,security_tax,medicare_tax,Pension_Plan,Health_Insurance,net_pay;
    cout<<"Please Enter Your Monthly Gross Pay: "<<endl;
    cin>>salary;

    cout<<"Please Enter Fedral Income Tax: "<<endl;
    cin>>fed_tax;

    cout<<"Please Enter The State Tax: "<<endl;
    cin>>state_tax;

    cout<<"Please Enter Social Security Tax: "<<endl;
    cin>>security_tax;

    cout<<"Please Enter Medical Care Tax: "<<endl;
    cin>>medicare_tax;

    cout<<"Please Enter Pension Plan Tax: "<<endl;
    cin>>Pension_Plan;

    cout<<"Please Enter Health Insurance Tax : "<<endl;
    cin>>Health_Insurance;

    double gross_pay,fed_de,state_de,security_de,medicare_de,pension_de,health_de;

    fed_de=(fed_tax*salary)/100;
    cout<<"The Fed is : "<<fed_de<<endl;

    state_de=(salary*state_tax)/100;

    security_de=(security_tax*salary)/100;

    medicare_de=(medicare_tax*salary)/100;

    pension_de=(Pension_Plan*salary)/100;

    health_de=(Health_Insurance*salary)/100;

    net_pay=salary-(fed_de+state_de+security_de+medicare_de+pension_de+health_de);

    cout<<"The Net Pay is : "<<net_pay<<endl;

    cout<<setfill('.');
    cout<<setw(30);
    cout<<left<<"The State Tax Is: ";
    cout<<setfill(' ')<<right;
    cout<<setw(10)<<setprecision(5)<<state_de<<endl;
return 0;
}
