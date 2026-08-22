// BMI calculator
#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    
    cout << "Enter your weight in kg: ";
    cin >> weight;
    
    cout << "Enter your height in m: ";
    cin >> height;
    
    bmi = weight / (height * height);
    
    cout << "Your BMI is: " << bmi << endl;
    
    return 0;
}