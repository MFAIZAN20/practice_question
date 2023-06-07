/* Exercise Practice Questions : 2 || Question No. 5 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class romanType
{
    string romen_numerial;
    double decimail_form;
    public:

    void set_as_romen(string str)
    {
        romen_numerial = str;
    }

    void print_as_roman()
    {
        cout<<"In The Roman Form is :"<<romen_numerial<<endl;
    }
    void calculate_as_decimal(string strr)
    {
        int lenght = strr.length();
        double sum;

        for (int i = 0; i < lenght; i++)
        {
            if (strr[i] == 'M')
            {
                sum = sum + 1000;
            }
            else if (strr[i] == 'D')
            {
                sum = sum + 500;
            }
            else if (strr[i] == 'C')
            {
                sum = sum + 100;
            }
            else if (strr[i] == 'L')
            {
                sum = sum + 50;
            }
            else if (strr[i] == 'X')
            {
                sum = sum + 10;
            }
            else if (strr[i] == 'V')
            {
                sum = sum + 5;
            }
            else if (strr[i] == 'I')
            {
                sum = sum + 1;
            }
            else
            {
                sum = sum+0;
            }
            decimail_form = sum;
        }
    }
    void print_decimal()
    {
        cout<<"The Total Decimal Value is : "<<decimail_form<<endl;
    }
};
int main()
{
    int option;
    string ro_fom;
    romanType roman;

    cout<<"Please Enter in The Roman Form : ";
    cin>>ro_fom;
    
    roman.calculate_as_decimal(ro_fom);
    roman.set_as_romen(ro_fom);

    cout<<"Choose One Of The Following Option\n\t1.Do Display I The Romen Form\n\t2.To Display In The Decimal Form";
    cin>>option;

    while (option != 3)
    {
        if (option == 1)
        {
            roman.print_as_roman();
            break;
        }
        else if (option == 2)
        {
            roman.print_decimal();
            break;
        }
        else if (option == 3)
        {
            cout<<"Exited From The Program "<<endl;
            break;
        }
        else if (option != 1 && option != 2 && option != 3)
        {
            cout<<"Invalid Option Selected"<<endl;
        }
    }
}