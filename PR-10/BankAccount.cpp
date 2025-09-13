#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
protected:
    long long int accountNumber;
    string accountHolderName;
    double balance;
    double withdrawl;
    double overdraftLimit = 75000;

public:
    virtual int addAccount()
    {
        int amount;
        cout << endl
             << endl
             << "CREATE ACCOUNT" << endl
             << endl;
        cout << "Enter Your Name : ";
        getline(cin, this->accountHolderName);
        fflush(stdin);
        cout << "Enter Your Account Number : ";
        cin >> this->accountNumber;
        do
        {
            cout << "Deposit Minimum Balance 1000 : ";
            cin >> amount;
        } while (amount < 1000);
        this->balance += amount;
    }

    virtual void deposit()
    {
        int amount;
        cout << endl
             << endl
             << "DEPOSIT" << endl
             << endl;
        cout << "Enter Amount to Deposit : ";
        cin >> amount;

        this->balance += amount;

        cout << "Amount Deposited Successfully..." << endl;

        cout << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }

    virtual void withdrawlBalance()
    {
        cout << endl
             << endl
             << "WITHDRAWL" << endl
             << endl;
        cout << "Enter Amount to Withdrawl : ";
        cin >> withdrawl;
        if (this->balance > withdrawl)
        {
            this->balance -= withdrawl;
            cout << "Withdrawl Successful" << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }

        cout << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }

    virtual void getBalance()
    {
        cout << endl
             << endl
             << "REMAINING BALANCE" << endl
             << endl;
        cout << "Balance\t: " << this->balance;

        cout << endl
             << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }

    virtual void getAccountInfo(string accountType)
    {
        cout << endl
             << endl
             << "ACCOUNT INFORMATION" << endl
             << endl;
        cout << "Account Holder Name\t: " << this->accountHolderName << endl;
        cout << "Account Number\t: " << this->accountNumber << endl;
        cout << "Account Type\t: " << accountType << endl;
        cout << "Current Balance\t: " << this->balance << endl;

        cout << endl
             << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }

    virtual void exit()
    {
        cout << endl
             << endl
             << "Program Exited Successfully...!" << endl
             << endl;

        cout << endl
             << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }

    virtual void invalidChoice()
    {
        system("cls");
        cout << endl
             << endl
             << "Invalid Choice" << endl
             << "Please Re-try" << endl
             << endl;

        cout << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }
};

class SavingsAccount : public virtual BankAccount
{
private:
    float finalAmount;
    const float interestRate = 5;

public:
    void calculateSavingsInterest()
    {
        this->finalAmount = balance * (this->interestRate / 100);
        cout << "Interest Rates\t: " << this->interestRate << "% " << endl;
        cout << "Current Balance\t: " << balance << endl;
        cout << "Yearly Interest Amount will be\t: " << this->finalAmount << endl;

        cout << "Press Enter to continue..." << endl;
        cin.ignore();
        cin.get();
    }
};

class CheckingAccount : public virtual BankAccount
{
private:
    double finalAmount;
    float interestRate = 2.50;

public:
    int checkOverdraft()
    {
        cout << endl
             << endl
             << "WITHDRAWL" << endl
             << endl;
        cout << "Enter Amount to Withdrawl : ";
        cin >> withdrawl;
        if (withdrawl > balance)
        {
            if (withdrawl < overdraftLimit)
            {
                overdraftLimit = overdraftLimit - (withdrawl - balance);
                cout << "Remaining Overdraft Money : " << overdraftLimit << endl;
            }
            else
            {
                cout << "Insufficient Balance" << endl;
            }
        }
        else
        {
            balance -= withdrawl;
        }
        cout << "Press Enter to Continue..." << endl;
        cin.ignore();
        cin.get();
    }

    void calculateCheckingInterest()
    {
        this->finalAmount = balance * (this->interestRate / 100);
        cout << "Interest Rates\t: " << this->interestRate << endl;
        cout << "Current Balance\t: " << balance << endl;
        cout << "Yearly Interest Amount will be\t: " << this->finalAmount << "% " << endl;
        cout << "Press Enter to Continue..." << endl;
        cin.ignore();
        cin.get();
    }

    void remainingBalance()
    {
        int odd = 75000;
        cout << endl
             << endl
             << "REMAINING BALANCE" << endl
             << endl;

        if (overdraftLimit < 75000)
        {
            cout << "Remaining Overdraft Limit\t: " << overdraftLimit << endl;
            cout << "Remaining Balance\t: 0" << endl;
            cout << "Overdraft Due\t: " << odd - overdraftLimit << endl;
        }
        else
        {
            cout << "Remaining Overdraft Limit\t: " << overdraftLimit << endl;
            cout << "Remaining Balance\t: " << balance << endl;
        }

        cout << endl
             << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }
};

class FixedDepositAccount : public virtual BankAccount, SavingsAccount, CheckingAccount
{
private:
    const float interestRate = 7.50;
    float finalAmount;
    int term;

public:
    void setTerm()
    {
        cout << "Enter Term (in months): ";
        cin >> term;
    }

    void calculateFixedInterest()
    {
        this->finalAmount = balance * (this->interestRate / 100);
        cout << "Interest Rates\t: " << this->interestRate << "% " << endl;
        cout << "Current Balance\t: " << balance << endl;
        cout << "Term Duration\t: " << term << " months" << endl;
        cout << "Yearly Interest Amount will be\t: " << this->finalAmount << endl;

        cout << "Press Enter to Continue..." << endl;
        cin.ignore();
        cin.get();
    }

    void bankProcess()
    {
        addAccount();
        setTerm();
        system("cls");
        cout << endl
             << endl
             << "Account Type : " << endl
             << "1. Savings" << endl
             << "2. Checking Account" << endl
             << "3. Fixed Account" << endl
             << "Enter Your Choice : ";
        int ch;
        cin >> ch;

        int reCh;
        while (reCh != 0)
        {
            switch (ch)
            {
            case 1:
                system("cls");
                cout << endl
                     << endl
                     << "SAVINGS ACCOUNT" << endl
                     << endl;
                cout << "1. Deposit" << endl
                     << "2. Withdrawl Balance" << endl
                     << "3. Get Balance" << endl
                     << "4. Get Account Info" << endl
                     << "5. Get Yearly Interest Amount" << endl
                     << "0. Exit" << endl
                     << "Enter Your Choice : ";
                cin >> reCh;

                switch (reCh)
                {
                case 1:
                    system("cls");
                    deposit();
                    break;

                case 2:
                    system("cls");
                    withdrawlBalance();
                    break;

                case 3:
                    system("cls");
                    getBalance();
                    break;

                case 4:
                    system("cls");
                    getAccountInfo("Savings Account");
                    break;

                case 5:
                    system("cls");
                    calculateSavingsInterest();
                    break;

                case 0:
                    system("cls");
                    exit();
                    break;

                default:
                    system("cls");
                    invalidChoice();
                }
                break;

            case 2:
                system("cls");
                cout << endl
                     << endl
                     << "CHECKING ACCOUNT" << endl
                     << endl;
                cout << "1. Deposit" << endl
                     << "2. Withdrawl Balance" << endl
                     << "3. Get Balance" << endl
                     << "4. Get Account Info" << endl
                     << "5. Get Yearly Interest Amount" << endl
                     << "0. Exit" << endl
                     << "Enter Your Choice : ";
                cin >> reCh;

                switch (reCh)
                {
                case 1:
                    system("cls");
                    deposit();
                    break;

                case 2:
                    system("cls");
                    checkOverdraft();
                    break;

                case 3:
                    system("cls");
                    remainingBalance();
                    break;

                case 4:
                    system("cls");
                    getAccountInfo("Checking Account");
                    break;

                case 5:
                    system("cls");
                    calculateCheckingInterest();
                    break;

                case 0:
                    system("cls");
                    exit();
                    break;

                default:
                    invalidChoice();
                }
                break;

            case 3:
                system("cls");
                cout << endl
                     << endl
                     << "FIXED ACCOUNT" << endl
                     << endl;
                cout << "1. Deposit" << endl
                     << "2. Withdrawl Balance" << endl
                     << "3. Get Balance" << endl
                     << "4. Get Account Info" << endl
                     << "5. Get Yearly Interest Amount" << endl
                     << "0. Exit" << endl
                     << "Enter Your Choice : ";
                cin >> reCh;

                switch (reCh)
                {
                case 1:
                    system("cls");
                    deposit();
                    break;

                case 2:
                    system("cls");
                    withdrawlBalance();
                    break;

                case 3:
                    system("cls");
                    getBalance();
                    break;

                case 4:
                    system("cls");
                    getAccountInfo("Fixed Account");
                    break;

                case 5:
                    system("cls");
                    calculateFixedInterest();
                    break;

                case 0:
                    system("cls");
                    exit();
                    break;

                default:
                    invalidChoice();
                }
                break;

            default:
                invalidChoice();
            }
        }
    }
};
