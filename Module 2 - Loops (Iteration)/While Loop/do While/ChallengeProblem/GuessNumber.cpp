/* Guess the Secret Number
Secret number = x
Keep asking the user to enter a number.
If the number is incorrect:
Wrong Guess!
If correct:
Correct Guess!
The program must stop after the correct guess.
*/

# include<iostream>
    using namespace std;

    int main(){
        cout <<"\nWelocome to Guessing Number Game\n";
        int Number;
        cout<<"Player 1 \n Enter Number To Guess: ";
        cin >> Number;

        int Guessnumber;
        int Attempts = 0;

        do
        {
        cout << "Player 2 \n Enter Guess Number: ";
        cin >> Guessnumber;

        if(Guessnumber == Number)
        {
            cout << "Correct Guess!\n";
            cout << "Player 2 Win\n";
            break;
        }
        else
        {
            cout << "Wrong Guess!\n";
        }

        Attempts++;

        } while(Attempts < 3);

        if (Attempts == 3){
            cout <<"Player 1 win\n";
        }

        return  0;
    }