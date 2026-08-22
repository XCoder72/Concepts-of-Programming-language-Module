/* Boolean logic is a way of representing conditions that can have only two outcomes: True or False.

Boolean Values - There are only two Boolean values.
true (1) - Condition is satisfied
false (0) - Condition is not satisfied

A Boolean variable stores either True or False.

A Boolean expression is an expression whose result is either True or False.

*/

// Design a Boolean status panel for a smart home (lights, fan, Wi-Fi, alarm)

#include <iostream>
using namespace std;

int main()
{
    // Boolean Variable
    bool lightsOn = true;
    bool fanOn = false;
    bool wifiConnected = true;
    bool alarmArmed = false;

    // Boolean Expression
    cout << "===== Smart Home Status =====" << endl;
    cout << "Lights ON       : " << lightsOn << endl;
    cout << "Fan ON          : " << fanOn << endl;
    cout << "Wi-Fi Connected : " << wifiConnected << endl;
    cout << "Alarm Armed     : " << alarmArmed << endl;

    cout << boolalpha; // Boolean Alpha (boolalpha) -To display true and false instead of 1 and 0.

    cout << "===== Smart Home Status =====" << endl;
    cout << "Lights ON       : " << lightsOn << endl;
    cout << "Fan ON          : " << fanOn << endl;
    cout << "Wi-Fi Connected : " << wifiConnected << endl;
    cout << "Alarm Armed     : " << alarmArmed << endl;

    return 0;
}

