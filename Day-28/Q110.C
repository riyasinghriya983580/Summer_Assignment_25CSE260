#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "\nEnter Account Number: ";
        cin >> accountNo;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Account Created Successfully!\n";
    }

    void deposit() {
        float amount;
        cout << "\nEnter Deposit Amount: ";
        cin >> amount;

        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw() {
        float amount;
        cout << "\nEnter Withdraw Amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }

    void displayAccount() {
        cout << "\n----- Account Details -----";
        cout << "\nAccount Number : " << accountNo;
        cout << "\nAccount Holder : " << name;
        cout << "\nCurrent Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n===== Bank Account System =====";
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Display Account";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.displayAccount();
                break;
            case 5:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}