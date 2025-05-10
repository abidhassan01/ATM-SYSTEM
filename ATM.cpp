#include<iostream>
using namespace std;
double password = 2005;
double balance = 0;
string accountHolderName = "ABID HASSAN";
string accountType = "Savings";
string accountNumber = "00012345";

int Balancecheck();
double depositpaisa(double);
double withdrawpaisa(double);
void changePin();
void viewAccountInfo();

int main()
{
    double pin;
    cout<< "         Welcome To         "<<endl;
    cout<< "  +------------------------+"<<endl;
    cout<< "  |                        |"<<endl;
    cout<< "  |          Bank          |"<<endl;
    cout<< "  |                        |"<<endl;
    cout<< "  +------------------------+"<<endl;
    cout<< endl;

    cout<<"Enter Your 4 Digit Pin Code : "<<endl;
    cin>>pin;
    if(pin == password)
    {
        double amount;
        char ch;
        do
        {
            cout<< "       ATM Menu:         " <<endl;
            cout<< "+-----------------------+" <<endl;
            cout<< "|         Menu          |" <<endl;
            cout<< "+-----------------------+" <<endl;
            cout<< "| 1. Check Balance      |" <<endl;
            cout<< "| 2. Deposit Money      |" <<endl;
            cout<< "| 3. Withdraw Money     |" <<endl;
            cout<< "| 4. Change PIN         |" <<endl;
            cout<< "| 5. Account Information|" <<endl;
            cout<< "| 6. Exit               |" <<endl;
            cout<< "+-----------------------+" <<endl;

            cout << "Enter your choice: ";
            cin >> ch;

            switch (ch)
            {
            case '1':
                Balancecheck();
                break;
            case '2':
                cout<<"Enter amount to deposit: $";
                cin>>amount;
                depositpaisa(amount);
                break;
            case '3':
                cout<<"Enter amount to withdraw: $";
                cin>>amount;
                withdrawpaisa(amount);
                break;
            case '4':
                changePin();
                break;
            case '5':
                viewAccountInfo();
                break;
            case '6':
                cout<<"Exiting program. Thank you!"<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
                break;
            }
        } while (ch != '6');
    }
    else
    {
        cout<<"Invalid Pin Code .../a";
    }
    return 0;
}

int Balancecheck()
{
    cout<<"--------------------------------"<<endl;
    cout<<"Your Current Balance is $"<<balance<<endl;
    cout<<"--------------------------------"<<endl;
    return 0;
}

double depositpaisa(double a)
{
    balance += a;
    cout<<"--------------------------------"<<endl;
    cout<<"Amount of $"<<a<<" Deposited Successfully"<<endl;
    cout<<"--------------------------------"<<endl;
    return balance;
}

double withdrawpaisa(double a)

{
    if (balance >= a)
    {
        balance -= a;
        cout<<"--------------------------------"<<endl;
        cout<<"Withdrawal of $"<<a<<" Successful"<<endl;
        cout<<"--------------------------------"<<endl;
    }
    else
    {
        cout<<"--------------------------------"<<endl;
        cout<<"Insufficient balance."<<endl;
        cout<<"--------------------------------"<<endl;
    }
    return balance;
}

void changePin()
{
    double newPin;
    cout<<"Enter new 4-digit PIN: ";
    cin>>newPin;
    password = newPin;
    cout<<"--------------------------------"<<endl;
    cout<<"PIN changed successfully."<<endl;
    cout<<"--------------------------------"<<endl;
}

void viewAccountInfo()
{
    cout<<"--------------------------------"<<endl;
    cout<< "Account Information:"<<endl;
    cout<< "--------------------------------"<<endl;
    cout<< "Account Holder Name: "<<accountHolderName<<endl;
    cout<< "Account Type       : "<<accountType<<endl;
    cout<< "Account Number     : "<<accountNumber<<endl;
    cout<< "--------------------------------"<<endl;
}
