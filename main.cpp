#include <iostream>
using namespace std;

void checkBalance(int balance); 
int depositMoney(int balance); 
int withdrawMoney(int balance); 

// system("cls") is used to clear console

int main()
{

system("cls");
    int choice;
    int balance = 0;

    do
    {
        
        cout << "*************************" << endl;
        cout << "     Banking System" << endl;
        cout << "*************************" << endl << endl;
        cout << "[1] Check balance" << endl;
        cout << "[2] Deposit money" << endl;
        cout << "[3] Withdraw money" << endl;
        cout << "[4] Exit" << endl << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += depositMoney(balance);
            break;
        case 3:
            balance -= withdrawMoney(balance);
            break;
        case 4:
            cout << endl << "Thank you for using banking system...." << endl;
            cout << "Made by Om Bodkhe" <<endl;
            break;
        default:
            cout << "Please provide valid input..." << endl <<endl;
        }


    } while (choice != 4);

    return 0;
}



void checkBalance(int amount)
{
    system("cls");
    cout << "Your balance is " << amount << " rupees..." << endl << endl;
}

int depositMoney(int balance)
{
    int deposit;
    cout << "Enter amount to deposit: ";
    cin >> deposit;

    if (deposit < 0)
    {
        system("cls");
        cout << "Amount cannot be negative..." << endl << endl;
        return 0;
    }
    else if (deposit == 0)
    {
        system("cls");
        cout << "Amount cannot be a zero..." << endl << endl;
        return 0;
    }

    system("cls");
    cout << "Successfully deposited " << deposit << " rupees..." << endl;
    cout << "Now your balance is " << (balance + deposit) << " rupees..." << endl << endl;
    return deposit;
}

int withdrawMoney(int balance)
{
    int withdraw;
    cout << "Enter amount to withdraw: ";
    cin >> withdraw;

    if (withdraw > balance)
    {
        system("cls");
        cout << "You don't have that much balance..." << endl << endl;
        return 0;
    }
    else if (withdraw < 0)
    {
        system("cls");
        cout << "You cannot withdraw negative amount..." << endl << endl;
        return 0;
    }
    else if (withdraw == 0)
    {
        system("cls");
        cout << "You cannot withdraw zero..." << endl << endl;
        return 0;
    }


    system("cls");
    cout << "Successfully withdrawn " << withdraw << " rupees..." << endl;
    cout << "Now your balance is " << (balance - withdraw) << " rupees..." << endl << endl;

    return withdraw;
}
