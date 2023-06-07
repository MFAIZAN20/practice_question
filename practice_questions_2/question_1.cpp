/*Exercise Practice Questions : 2 \\ Question No. 1 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct employeeType
{
    int id_emp;
    float dollar;
};

int main(){
    employeeType emp[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"Please Enter The Employee Id OF Person : "<<i+1<<endl;
        cin>>emp[i].id_emp;
    
        cout<<"Please Enter The Price : "<<i+1<<endl;
        cin>>emp[i].dollar;
    }
    
    for (int i = 0; i < 3; i++)
    {
     cout<<"The Data OF Person Is"<<emp[i].id_emp<<emp[i].dollar<<endl;   
    }
return 0;
}
