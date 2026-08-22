/* Newline - A newline moves the cursor to the next line.(endl,\n)
* endl - Not include in "".
* \n - include in "".
*/

# include<iostream>
    using namespace std;

    int main(){
        // Without endl ,\n
        cout<<"Hello world !";
        // with endl
        cout<<"hey buddy"<<endl<<"welcome To C++";
        // with \n
        cout<<"\nhey buddy\nwelcome To C++";
        return  0;
    }