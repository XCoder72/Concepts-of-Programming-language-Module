/*
Create a simple ATM program where:
balance = 5000
Functions:
deposit(amount)
withdraw(amount)
showBalance()
*/

# include<iostream>
    using namespace std;

    int balance = 5000; // global Variable

    void deposit(int amount){
        balance += amount; // amount is local variable
        cout << "Deposited: " << amount << endl;
        cout << "New Balance: " << balance << endl;
    }

    void withdraw(int amount){
        if(amount > balance){
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
    }

    void showBalance(){
        cout << "Current Balance: " << balance << endl;
    }

    int main(){
        
        while(true){
            int choice, amount;
            cout << "\nATM Menu:" << endl;
            cout << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Show Balance" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch(choice){
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    deposit(amount);
                    break;
                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    withdraw(amount);
                    break;
                case 3:
                    showBalance();
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    return 0;
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        }
        return  0;
    }