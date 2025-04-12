#include <iostream>

using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance = 0;

public:
    BankAccount()
    {
        this->accountNumber = 0;
        this->accountHolderName = " ";
        this->balance = 0;
    }

    void CreateAccount(int accNum, string name, double inbalance)
    {
        this->accountNumber = accNum;
        this->accountHolderName = name;
        this->balance = inbalance;
    }

    void deposite(double amount)
    {
        this->balance += amount;
        cout << "Amount deposited successfully...";
    }

    void withdraw(double amount)
    {
        if (amount <= this->balance)
        {
            this->balance -= amount;
            cout << "Amount withdrawned successfully.." << endl;
            cout << "Your current balance :" << this->balance << endl;
        }
    }

    double getBalance()
    {
        return this->balance;
    }

    void displayAccountInfo(int accNum, string name, int balance)
    {
        cout << "Account Number : " << this->accountNumber << endl;
        cout << "Account holder Name : " << this->accountHolderName << endl;
        cout << "Account Balnce : " << this->balance << endl;
    }

    int getAccountNumber()
    {
        return this->accountNumber;
    }
};

class savingAccount : public BankAccount
{
protected:
    float ineterestRate = 6;

public:
    void calculateInterest(float rate)
    {
        this->ineterestRate = rate;
        double interest = (this->balance * rate) / 100;
        this->balance += interest;
    }
};

class CheckingAccount : public BankAccount
{
};

class FixedDepositeAccount : public BankAccount
{
protected:
    int term;

public:
    void calculateInterest(float rate, int time)
    {
        this->term = time;
        double interest = (this->balance * rate * time);
        this->balance += interest;
    }
};

int main()
{
    int count = 0;
    savingAccount s1[3];
    CheckingAccount c1[3];
    FixedDepositeAccount f1[3];

    int choice;

    do
    {

        cout << "1. Create Bank Account " << endl;
        cout << "2. Deposite " << endl;
        cout << "3. Withdraw " << endl;
        cout << "4. Calculate InterestRate " << endl;
        cout << "5. Display Account Details " << endl;
        cout << "6. exit " << endl;

        cout << "Enter Your Choice:";
        cin >> choice;

        

        switch (choice)
        {
            case 1:
            {
                int accNum;
                string name;
                int balance;
                bool exist = false;

                cout << "Enter Account Number :";
                cin >> accNum;

                // if(s1[count].getAccountNumber() == accNum){
                //     exist = true;
                // }

                // for(int i = 0; i < 1; i++){

                cin.ignore();

                cout << "Enter AccountHolder Name:";
                getline(cin, name);

                cout << "Enter Blance: ";
                cin >> balance;

                s1[count].CreateAccount(accNum, name, balance);
                
                // }
                count++;
                break;
            }
            case 2:
            {
                int accNum;
                double amount;
                

                cout << "Enter AccountNumber:";
                cin >> accNum;

                for (int i = 0; i < count; i++)
                {

                    cout << "Enter Amount :";
                    cin >> amount;

                    s1[i].deposite(amount);
                }
            }
            case 3:
            {
                int accNum;
                double amount;

                cout << "Enter AccountNumber:";
                cin >> accNum;

                for(int i = 0; i < count; i++){

                    cout << "Enter amount:";
                    cin >> amount;

                    s1[i].withdraw(amount);
                }
                break;
            }
            case 4:
            {
                int accNum;
                double amount;
                int rate = 6;

                cout << "Enter AccountNumber:";
                cin >> accNum;

                for(int i = 0; i < count; i++){
                    cout << "Enter amount:";
                    cin >> amount;

                    s1[i].calculateInterest(rate);
                }
            }
            
        
        }
    } while (choice != 6);

    return 0;
}
