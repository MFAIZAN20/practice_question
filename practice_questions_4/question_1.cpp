/*Exercise Practice Questions : 4 || Question No. 1 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class SavingsAccount
{
    static double annual_InterestRate;
    double savingsBalance;
    public:

    SavingsAccount(double save_balance = 0.0)
    {
        setsaving_balance(save_balance);
    }

    /* setter Function */
    void setsaving_balance(double balance)
    {
        if(balance >= 0 )
        {
            savingsBalance = balance;
        }
        else
        {
            balance = 0;
        }
    }

    /* Getter Functions */

    double getsaving_balance() const 
    {
        return savingsBalance;
    }

    void calculateMonthlyInterest()
    {
        double monthly_intrest = (getsaving_balance() * (annual_InterestRate / 12));
        double total_saving = (getsaving_balance()+monthly_intrest); 
        setsaving_balance(total_saving);
    }

    void modifyInterestRate(double intrest)
    {
        if (intrest >= 0)
        {
            annual_InterestRate = intrest;
        }
        else 
        {
            annual_InterestRate = 0;
        }
    }
};
double SavingsAccount :: annual_InterestRate = 0;
int main()
{
    SavingsAccount saver1;
    SavingsAccount saver2;

    /* Setting The Saving Balance */
    saver1.setsaving_balance(2000.00);
    saver2.setsaving_balance(3000.00);

    /* Setting The Intrest Rate To 3 */
    saver1.modifyInterestRate(3);
    saver2.modifyInterestRate(3);

    /* Adding The Saving to The total Saving balance after one month */
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    /* Cheching The Saving Balance After One Month */
    cout<<"The First Saver Saving Balance is : "<<saver1.getsaving_balance()<<"\n"<<"The Second Saver Saving Balance is : "<<saver2.getsaving_balance()<<endl;

    /* Changing The Intrest Rate to 4 */

    saver1.modifyInterestRate(4);
    saver2.modifyInterestRate(4);

    /* Calculating The Saving At 4 intrest rate*/

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    
    /* After One Month The Saving Balance At 4 intrest rate */
    cout<<"The First Saver Saving Balance is : "<<saver1.getsaving_balance()<<"\n"<<"The Second Saver Saving Balance is : "<<saver2.getsaving_balance()<<endl;

    /* Remember That Is Include The Previous Balance */

}
