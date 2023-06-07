/*Exercise Practice Questions : 5 || Question No. 1 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class dateType
{
int dMonth;
int dDay; 
int dYear; 
public:

dateType(int day = 1, int month = 1, int year = 1900)
{
    setDate(day,month,year);
}

void setDate(int d,int m,int y)
{
    if (d >= 1 && d <=31)
    {
        dDay = d;
    }
    else 
    {
        dDay = 1;
    }
    
    if (m >= 1 && m <=12)
    {
        dMonth = m;
    }
    else 
    {
        dMonth = 1;
    }

    if (y >= 1900 && y <=2100)
    {
        dYear = y;
    }
    else 
    {
        dYear = 1;
    }  
} 
int getDay() const
{
    return dDay;
}
int getMonth() const
{
    return dMonth;
}
int getYear() const
{
    return dYear;
}
bool isLeapYear() const 
{
    bool flag;
    int year = getYear();
    
    if (year % 4 == 0 && year % 100 != 0  || year % 400 == 0)
    {
        flag = true;
    }
    else 
    {
        flag = false;
    }

    return flag;
}

int getDayInMonth(int month, int year) 
{
    if (month < 1 || month > 12) 
    {
        return 0;
    }
    else if (month == 2) 
    {
        // check for leap year if it is leap year then FEB = 29 lese FEB = 28
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
        {
            return 29;
        } 
        else 
        {
            return 28;
        }
    } 
    else if (month == 4 || month == 6 || month == 9 || month == 11) 
    {
        return 30;
    } 
    else 
    {
        return 31;
    }
}
int daysPassed(){
    int days = getDay();
    for (int month = 1; month < getMonth(); month++) 
    {
        days += getDayInMonth(month, dYear);
    }
    return days;
}
int daysRemaining() {
    int days = getDayInMonth(getMonth(),getYear()) - dDay;
    for (int month = getMonth() + 1; month <= 12; month++) {
        days += getDayInMonth(month, dYear);
    }
    return days;
}
void printDate() const
{
    cout << dDay << "-" << dMonth << "-" << dYear << "\n";
}
};
int main() {
    dateType d(13, 3, 2013);
    d.printDate();
    cout << d.daysPassed() << "\n";
    cout << d.daysRemaining() << "\n";
}