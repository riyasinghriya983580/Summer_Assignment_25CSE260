#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    int bookId[100], quantity[100], count = 0;
    string title[100], author[100];

public:
    void addBook() {
        cout << "\nEnter Book ID: ";
        cin >> bookId[count];
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title[count]);

        cout << "Enter Author Name: ";
        getline(cin, author[count]);

        cout << "Enter Quantity: ";
        cin >> quantity[count];

        count++;
        cout << "Book Added Successfully!\n";
    }

    void displayBooks() {
        if (count == 0) {
            cout << "\nNo Books Available!\n";
            return;
        }

        cout << "\n--- Library Books ---\n";
        for (int i = 0; i < count; i++) {
            cout << "\nBook ID : " << bookId[i];
            cout << "\nTitle   : " << title[i];
            cout << "\nAuthor  : " << author[i];
            cout << "\nQuantity: " << quantity[i] << "\n";
        }
    }

    void searchBook() {
        int id;
        cout << "\nEnter Book ID to Search: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                cout << "\nBook Found!\n";
                cout << "Title: " << title[i] << endl;
                cout << "Author: " << author[i] << endl;
                cout << "Quantity: " << quantity[i] << endl;
                return;
            }
        }
        cout << "Book Not Found!\n";
    }

    void issueBook() {
        int id;
        cout << "\nEnter Book ID to Issue: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                if (quantity[i] > 0) {
                    quantity[i]--;
                    cout << "Book Issued Successfully!\n";
                } else {
                    cout << "Book Out of Stock!\n";
                }
                return;
            }
        }
        cout << "Book Not Found!\n";
    }

    void returnBook() {
        int id;
        cout << "\nEnter Book ID to Return: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                quantity[i]++;
                cout << "Book Returned Successfully!\n";
                return;
            }
        }
        cout << "Book Not Found!\n";
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n===== Library Management System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                lib.addBook();
                break;
            case 2:
                lib.displayBooks();
                break;
            case 3:
                lib.searchBook();
                break;
            case 4:
                lib.issueBook();
                break;
            case 5:
                lib.returnBook();
                break;
            case 6:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}