#include <iostream>
#include <string>
using namespace std;

class TicketBooking {
private:
    string name;
    int age;
    int ticketNo;
    int seats = 50;

public:
    void bookTicket() {
        if (seats == 0) {
            cout << "\nSorry! No seats available.\n";
            return;
        }

        cout << "\nEnter Passenger Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Ticket Number: ";
        cin >> ticketNo;

        seats--;

        cout << "\nTicket Booked Successfully!\n";
        cout << "Remaining Seats: " << seats << endl;
    }

    void cancelTicket() {
        seats++;
        cout << "\nTicket Cancelled Successfully!\n";
        cout << "Available Seats: " << seats << endl;
    }

    void displayTicket() {
        cout << "\n----- Ticket Details -----";
        cout << "\nPassenger Name : " << name;
        cout << "\nAge            : " << age;
        cout << "\nTicket Number  : " << ticketNo;
        cout << "\nAvailable Seats: " << seats << endl;
    }
};

int main() {
    TicketBooking t;
    int choice;

    do {
        cout << "\n===== Ticket Booking System =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Cancel Ticket";
        cout << "\n3. Display Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                t.bookTicket();
                break;
            case 2:
                t.cancelTicket();
                break;
            case 3:
                t.displayTicket();
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