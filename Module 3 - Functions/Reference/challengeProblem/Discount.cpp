/*
Create:
void applyDiscount(double &price, double discount)
The function should modify the original price.
Example:
Original price: 1000
Discount: 20%

Final price: 800
*/

# include<iostream>
    using namespace std;

    void applyDiscount(double &price, double discount){
        price = price - (price * discount);
        cout <<"Discount price :- "<< price << endl;
    }

    int main(){
        double price = 100.0;
        double discount = 0.1;

        cout << "Original price :- " << price << endl;
        applyDiscount(price, discount);

        return  0;
    }