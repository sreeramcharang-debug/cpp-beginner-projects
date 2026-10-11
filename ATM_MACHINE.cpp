#include <iostream>
using namespace std;

int pin_code = 1234;
int balance = 10000;
int attempts = 3;

void deposit(int amount) {
    if (amount >= 0) {
        balance += amount;
        cout << "deposited successfully!, current balance: " << balance << endl;
    } else {
        cout << "We dont accept negative numbers!" << endl;
    }
}

void check() {
    cout << "current balance: " << balance << endl;
}

void take(int amount) {
    if (amount >= 0 && balance >= amount) {
        balance -= amount;
        cout << "withdraw successful!, current balance: " << balance << endl;
    } elseif (amount < 0) {
        cout << "We dont accept negative numbers!" << endl;
    } else {
        cout << "Insufficient funds!" << endl;
    }
}

int main() {
    cout << "===================== Welcome to the ATM =============================" << endl;

    while (true) {
        int enter_pin;
        cout << "Enter the pin: ";
        cin >> enter_pin;

        if (enter_pin != pin_code) {
            attempts--;
            cout << "wrong pin!" << endl;
            cout << "number of attempts left: " << attempts << endl;
            if (attempts == 0) {
                cout << "Sorry to inform that your account is freezed!" << endl;
                break;
            }
            continue;
        }

        cout << "Correct pin!" << endl;
        cout << "Please choose the option number from the following!" << endl;
        cout << "1.Deposit Amount" << endl;
        cout << "2.Withdraw Amount" << endl;
        cout << "3.Check Balance" << endl;
        cout << "4.exit" << endl;

        while (true) {
            int num;
            cout << "Enter the number here! -> ";
            cin >> num;

            if (num == 1) {
                int io;
                cout << "Enter here the amount -> ";
                cin >> io;
                deposit(io);
            } else if (num == 2) {
                int oi;
                cout << "Enter the amount here -> ";
                cin >> oi;
                take(oi);
            } else if (num == 3) {
                check();
            } else if (num == 4) {
                cout << "============== THANK YOU FOR USING THE ATM  ==========================" << endl;
                cout << "====================== VISIT US AGAIN! =============================" << endl;
                break;
            } else {
                cout << "Invalid option! Choose 1, 2, 3, or 4." << endl;
            }
        }
        break;
    }

    return 0;
}