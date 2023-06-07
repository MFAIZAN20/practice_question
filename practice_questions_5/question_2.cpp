#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class bankAccount 
{
    int account_number;
    double account_balance;
    public:
    bankAccount(int acc_num = 0000,double acct_balance = 0)
    {
        set_account_number(acc_num);
        set_accunt_balance(acct_balance);
    }

    void set_account_number(int act_number)
    {
        if (act_number >= 0)
        {
            account_number = act_number;
        }
        else
        {
            account_number = 0;
        }
    }
    void set_accunt_balance(double act_balance)
    {   
        if (act_balance >= 0)
        {
            account_balance = act_balance;
        }
        else
        {
            account_balance = 0;
        }
    }

    int get_account_number() const
    {
        return account_number;
    } 
    double get_account_balance() const
    {
        return account_balance;
    }

    void deposit(int dep_amt)
    {
        if (dep_amt >= 0)
        {
            set_accunt_balance((get_account_balance() + dep_amt));
        }
        else
        {
            set_accunt_balance((get_account_balance() + 0));
        }
    }

    virtual void withdraw_money(double with_amt)
    {
        if (with_amt <= get_account_balance())
        {
            set_account_number((get_account_balance() - with_amt));
        }
        else
        {
            cout<<"You Balance is Less"<<endl;
        }
    }
    void print_account_information() const
    {
        cout<<"The Account Number is : "<<get_account_number()<<endl;
        cout<<"Current Account Balance is : "<<get_account_balance()<<endl;
    }
};

class checkingAccount : public bankAccount 
{

    double interestRate;
    double minBalance;
    double serviceCharges;
public:
    checkingAccount(int accNum = 0000, double accBal = 0.0, double intrstRate = 0, double minBal = 0, double serCharges = 0) : bankAccount(accNum, accBal)
    {
        setInterestRate(intrstRate);
        setMinBalance(minBal);
        setServiceCharges(serCharges);
    }

    void setInterestRate(double rate) 
    {
        interestRate = rate;
    }

    double getInterestRate() const 
    {
        return interestRate;
    }

    void setMinBalance(double min) 
    {
        minBalance = min;
    }

    double getMinBalance() const 
    {
        return minBalance;
    }

    void setServiceCharges(double charges) 
    {
        serviceCharges = charges;
    }

    double getServiceCharges() const 
    {
        return serviceCharges;
    }

    void postInterest() 
    {
        double interest = get_account_balance() * interestRate;
        deposit(interest);
    }

    bool isBalanceBelowMin() const 
    {
        return get_account_balance() < minBalance;
    }

    void writeCheck(double amount) 
    {
        withdraw_money(amount);
        if (isBalanceBelowMin()) {
            withdraw_money(serviceCharges);
        }
    }

    void withdraw_money(double amount) override 
    {
        bankAccount::withdraw_money(amount);
        if (isBalanceBelowMin()) 
        {
            withdraw_money(serviceCharges);
        }
    }

    void printAccountInfo() const 
    {
        bankAccount::print_account_information();
        std::cout << "Interest Rate: " << interestRate << std::endl;
        std::cout << "Minimum Balance: " << minBalance << std::endl;
        std::cout << "Service Charges: " << serviceCharges << std::endl;
    }
};

class savingsAccount : public bankAccount 
{
    double interestRate;
public:
    savingsAccount(int accNumber, double accBalance, double intrstRate): bankAccount(accNumber, accBalance) 
    {
        setInterestRate(intrstRate);
    }

    void setInterestRate(double rate) 
    {
        interestRate = rate;
    }

    double getInterestRate() const 
    {
        return interestRate;
    }

    void postInterest() 
    {
        double interest = get_account_balance() * interestRate;
        deposit(interest);
    }

    void withdraw_money(double amount) override 
    {
        if (amount <= get_account_balance()) 
        {
            bankAccount::withdraw_money(amount);
        }
    }

    void printAccountInfo() const 
    {
        bankAccount::print_account_information();
        cout << "Interest Rate: " << interestRate << endl;
    }
};

int main() {
    bankAccount acc1(1234, 1000.0);
    acc1.deposit(500.0);
    acc1.withdraw_money(200.0);
    acc1.print_account_information();

    checkingAccount chk1(5678, 2000.0, 0.02, 1000.0, 10.0);
    chk1.deposit(1000.0);
    chk1.withdraw_money(1500.0);
    chk1.writeCheck(500.0);
    chk1.postInterest();
    chk1.printAccountInfo();

    savingsAccount sav1(9012, 3000.0, 0.03);
    sav1.deposit(2000.0);
    sav1.withdraw_money(3500.0);
    sav1.postInterest();
    sav1.printAccountInfo();

    return 0;
}