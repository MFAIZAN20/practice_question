/*Exercise Practice Questions : 3 || Question No. 4 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class dataType
{
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
enum etype {LABORER, SECRETARY, MANAGER, EXECUTIVE, RESEARCHER};
class employee 
{
    int Emp_num;
    float Emp_Salary;
    dataType Join_date;
    etype Emp_position;
public:

void get_employee_informationgetemploy() 
{
    cout << "Enter Employee ID Number : ";
    cin >> Emp_num;
    cout << "Enter Employee Salary : ";
    cin >> Emp_Salary;
    cout << "Enter Employee Joining Date (dd/mm/yyyy) : ";
    Join_date.getdata();
    cout << "Please Select The Employee Position \t(0=laborer, 1=secretary, 2=manager, 3=executive, 4=researcher): ";
    int type;
    cin >> type;

    switch (type) 
    {
        case 0:
            Emp_position = LABORER;
            break;
        case 1:
            Emp_position = SECRETARY;
            break;
        case 2:
            Emp_position = MANAGER;
            break;
        case 3:
            Emp_position = EXECUTIVE;
            break;
        case 4:
            Emp_position = RESEARCHER;
            break;
        default:
            cout<< "Invalid employee type: " << type << "\n";
            break;
    }
}
void print_employee_information() 
{
    cout<< "Employee Id Number is : " << Emp_num << "\n";
    cout<< "Employee Salaray is : " << Emp_Salary << "\n";
    cout<< "Employee Joining Date is : ";
    Join_date.showdata();
    cout << "Employee type: ";
        switch (Emp_position) 
        {
        case LABORER:
            cout << "Laborer\n";
                break;
            case SECRETARY:
                cout << "Secretary\n";
                break;
            case MANAGER:
                cout << "Manager\n";
                break;
            case EXECUTIVE:
                cout << "Executive\n";
                break;
            case RESEARCHER:
                cout << "Researcher\n";
                break;
        }
}
};

int main() 
{
    employee emp1, emp2, emp3;

    cout<< "Enter data for employee 1:\n";
    emp1.get_employee_informationgetemploy();

    cout<< "\nEnter data for employee 2:\n";
    emp2.get_employee_informationgetemploy();

    cout<< "\nEnter data for employee 3:\n";
    emp3.get_employee_informationgetemploy();

    cout<< "\nEmployee data:\n";
    emp1.print_employee_information ();
    cout<< "\n";
    emp2.print_employee_information();
    cout<< "\n";
    emp3.print_employee_information();
    cout<<"\n";

    return 0;
}
