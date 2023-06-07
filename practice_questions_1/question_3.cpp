#include <iostream>
#include <string>

using namespace std;

int getdata();
int taxamount(int salary, char mar_status, char funds_plan);
int exemption(char exem_status);
int pension_funds(int fund, int salary);

int main() 
{
    getdata();
    return 0;
}

int getdata() 
{
    char mar_op, ch_op;
    int salary, amt_fund;

    cout << "Are you married? (Yes-Y/No-N)" << endl;
    cin >> mar_op;

    cout << "Please enter your amount of salary: " << endl;
    cin >> salary;

    cout << "Do you want to contribute to a pension fund? (Yes-Y/No-N)" << endl;
    cin >> ch_op;

    if (ch_op == 'Y' || ch_op == 'y') 
    {
        cout << "Enter the percentage for funds up to 6%." << endl;
        int per_fund;
        cin >> per_fund;
        if (per_fund > 6 || per_fund <= 0) 
        {
            cout << "The percentage of fund amount must be less than 6." << endl;
            amt_fund = 0;
        } 
        else 
        {
            amt_fund = pension_funds(per_fund, salary);
        }
    } 
    else 
    {
        cout << "You did not select the pension fund." << endl;
        amt_fund = 0;
    }

    int total_tax = taxamount(salary, mar_op, ch_op);

    cout << "The total tax amount is: " << total_tax << endl;

    return 0;
}

int taxamount(int salary, char mar_status, char funds_plan) 
{
    int total_tax, amt_fund, per_fund, tax;

    amt_fund = 0;

    if (funds_plan == 'Y' || funds_plan == 'y') 
    {
        cout << "Enter the percentage for funds up to 6%." << endl;
        cin >> per_fund;

        if (per_fund > 6 || per_fund <= 0) 
        {
            cout << "The percentage of fund amount must be less than 6." << endl;
            amt_fund = 0;
        } 
        else 
        {
            amt_fund = pension_funds(per_fund, salary);
        }
    } 
    else 
    {
        cout << "You did not select the pension fund." << endl;
        amt_fund = 0;
    }

    if (salary <= 15000) 
    {
        tax = (salary / 100) * 15;
        total_tax = (tax - exemption(mar_status)) + amt_fund;
    } 
    else if (salary > 15000 && salary <= 40000) 
    {
        tax = ((salary - 15000) / 100) * 25 + 2250;
        total_tax = (tax - exemption(mar_status)) + amt_fund;
    } 
    else if (salary > 40000) 
    {
        tax = ((salary - 40000) / 100) * 35 + 8460;
        total_tax = (tax - exemption(mar_status)) + amt_fund;
    }

    return total_tax;
}

int exemption(char exem_status) 
{
    int exem_tax;
    if (exem_status == 'Y' || exem_status == 'y') 
    {
        exem_tax = 7000;
    } 
    else 
    {
        exem_tax = 4000;
    }
    return exem_tax;
}

int pension_funds(int fund, int salary)
{
    int pension;
    pension = (salary / 100) * fund;
    return pension;
}