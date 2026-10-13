/*
Customer Service Queue
Create a program that:
1. Accepts the names of three customers.
2. Adds them to a queue in arrival order.
3. Serves each customer one by one.
4. Prints the name of each customer when served.
Expected output for Rahul, Priya, and Aman:
*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Creating Queue
    queue <string> q;

    string customer;
    int totalCustomers = 0;
    cout << "\nTotal customers: ";
    cin >> totalCustomers;

    cout << endl;

    for (int i = 0; i < totalCustomers; i++) {
        cout << "Enter the name of customer " << i + 1 << ": ";
        cin >> customer;
        q.push(customer);
        cout << "Customer added to queue: " << customer << endl;
        cout <<endl;
    }

    while (!q.empty()) {
        cout << "Serving customer: " << q.front() << endl;
        q.pop();
    }

    return 0;
}