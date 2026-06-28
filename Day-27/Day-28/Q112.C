#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string name[100], phone[100], email[100];
    int count = 0;

public:
    void addContact() {
        cout << "\nEnter Name: ";
        cin.ignore();
        getline(cin, name[count]);

        cout << "Enter Phone Number: ";
        getline(cin, phone[count]);

        cout << "Enter Email: ";
        getline(cin, email[count]);

        count++;
        cout << "Contact Added Successfully!\n";
    }

    void displayContacts() {
        if (count == 0) {
            cout << "\nNo Contacts Available!\n";
            return;
        }

        cout << "\n----- Contact List -----\n";
        for (int i = 0; i < count; i++) {
            cout << "\nContact " << i + 1 << endl;
            cout << "Name  : " << name[i] << endl;
            cout << "Phone : " << phone[i] << endl;
            cout << "Email : " << email[i] << endl;
        }
    }

    void searchContact() {
        string searchName;
        cout << "\nEnter Name to Search: ";
        cin.ignore();
        getline(cin, searchName);

        for (int i = 0; i < count; i++) {
            if (name[i] == searchName) {
                cout << "\nContact Found!\n";
                cout << "Name  : " << name[i] << endl;
                cout << "Phone : " << phone[i] << endl;
                cout << "Email : " << email[i] << endl;
                return;
            }
        }

        cout << "Contact Not Found!\n";
    }
};

int main() {
    Contact c;
    int choice;

    do {
        cout << "\n===== Contact Management System =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                c.addContact();
                break;
            case 2:
                c.displayContacts();
                break;
            case 3:
                c.searchContact();
                break;
            case 4:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}