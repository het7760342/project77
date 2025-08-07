#include <iostream>
using namespace std;

class ATM 
{
    private:
        double balance;
        string pin;
    public:

     ATM() 
     {
        balance = 0.0;
        pin="1796";
     }
     void spin(string newpin)
     {
        pin=newpin;
     }
     string gpin()
     {
        return pin;
     }
     void setbalance(double newbalance)
     {
        balance=newbalance;
     }
    
    double getBalance() 
    {
        return balance;
    }

    
    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout <<"deposited: " << amount <<endl;
        } 
        else 
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    
    void withdraw(double amount) 
    {
        if (amount > 0 && amount <=balance) 
        {
            balance-=amount;
            cout << "withdraw:"<<amount<<endl;
        }
        else 
        {
            cout <<"invalid amount"<<endl;
        }
    }
    void showbalance()
    {
        cout <<"current balance:"<<balance<<endl;
    }
};

int main() 
{
    ATM account;         
    int choice;
    double amount;
    string enteredpin;
    bool exit=false;

    cout <<"enter your PIN:-";
    cin>>enteredpin;

    if(enteredpin !=  account.gpin())
    {
        cout <<"incorrect pin.access denied\n";
        return 0;
    }
    int i;
    ATM b1;
    for(i=1;i<=3;i++)
    {
        int choice,amount;   
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                cout << "Current Balance: " << account.getBalance() << "\n";
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } 
    return 0;
}
