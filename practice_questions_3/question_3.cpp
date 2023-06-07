/*Exercise Practice Questions : 3 || Question No. 3 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class employeeType
{ 
    int id_emp;
    float emp_com;
    public:

    void data()
    {
        cout<<"Please Enter The Employee Id : "<<endl;
        cin>>id_emp;
    
        cout<<"Please Enter The Employee Compensation : "<<endl;
        cin>>emp_com;
    }
    void print_data()
    {
        cout<<"The Employee Id : "<<id_emp<<endl;
        cout<<"The Employee Compensation : $ "<<emp_com<<endl;
    }
};

int main(){
    employeeType emp[3];
    
    for (int i = 0; i < 3; i++)
    {
        emp[i].data();   
    }

    for (int i = 0; i < 3; i++)
    {
        emp[i].print_data();
    }
return 0;
}