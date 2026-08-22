/* Print the following pattern:

*****
*****
*****
*****
*****

-----------
*
**
***
****
*****

-----------
*****
****
***
**
*

-----------
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

-----------
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

-----------
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

-----------
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5  

*/ 

# include <iostream>
using namespace std;

int main(){ 
    int n;
    cout <<"Enter n Value : ";
    cin >>n;
    cout <<"\n-----------\n";
    cout <<"\nRectangle\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout <<"\n-----------\n";
    cout <<"\nIncreasing Triangle\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout <<"\n-----------\n";
    cout <<"\nDecreasing Triangle\n";
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout <<"\n-----------\n";
    cout <<"\nIncreasing Numbers\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;

    }

    cout <<"\n-----------\n";
    cout <<"\nDecreasing Numbers\n";
    for(int i=0; i<n; i++){
        for (int j=n; j > i; j--) {
                cout << n - j + 1 << " ";
            }
        cout<<endl;
    }

    cout <<"\n-----------\n";
    cout <<"\nSame Number Per Row (Increasing)\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

    cout <<"\n-----------\n";
    cout <<"\nSame Number Per Row (Decreasing)\n";
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}