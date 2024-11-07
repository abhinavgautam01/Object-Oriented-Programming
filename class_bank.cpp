#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;
    bool accountCreated;

public:
    void initialize() {
        accountHolderName = "";
        accountNumber = 0;
        balance = 0.0;
        interestRate = 0.05; // 5% interest rate
        accountCreated = false;
    }

    void createAccount() {
        if (accountCreated) {
            cout << "Account already exists.\n";
            return;
        }
        cout << "Enter account holder's name: ";
        // getline(cin, accountHolderName);     we cannot simply use this because of whitespaces, which are left because of the previous execution...
        getline(cin >> ws, accountHolderName); // to capture full name

        cout << "Enter account number: ";
        cin >> accountNumber;

        // balance = 0.0; // Starting balance
        // cout << "Account created successfully.\n";
        // accountCreated = true;

        // Prompt for initial balance
        cout << "Enter initial balance: $";
        cin >> balance;
        while (balance < 0) {
            cout << "Initial balance cannot be negative. Please enter a positive amount: $";
            cin >> balance;
        }

        cout << "Account created successfully with a balance of $" << balance << ".\n";
        accountCreated = true;
    }

    void accountSummary() const {
        if (!accountCreated) {
            cout << "No account exists. Please create an account first.\n";
            return;
        }
        cout << "\nAccount Summary:\n";
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate * 100 << "%\n\n";
    }

    void deposit() {
        if (!accountCreated) {
            cout << "No account exists. Please create an account first.\n";
            return;
        }
        double amount;
        cout << "Enter amount to deposit: $";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully.\n";
        } else {
            cout << "Invalid amount. Please enter a positive value.\n";
        }
    }

    void withdraw() {
        if (!accountCreated) {
            cout << "No account exists. Please create an account first.\n";
            return;
        }
        double amount;
        cout << "Enter amount to withdraw: $";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << " successfully.\n";
        } else {
            cout << "Invalid amount or insufficient balance.\n";
        }
    }

    void applyInterest() {
        if (!accountCreated) {
            cout << "No account exists. Please create an account first.\n";
            return;
        }
        balance += balance * interestRate;
        cout << "Interest applied. New balance is $" << balance << endl;
    }
};

int main() {
    Bank bank;
    bank.initialize(); // Initialize the bank object without a constructor
    int choice;

    while (true) {
        cout << "\n=== Bank Menu ===\n";
        cout << "1. Create Account\n";
        cout << "2. Account Summary\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Apply Interest\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.accountSummary();
                break;
            case 3:
                bank.deposit();
                break;
            case 4:
                bank.withdraw();
                break;
            case 5:
                bank.applyInterest();
                break;
            case 6:
                cout << "Exiting the program. Thank you!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
