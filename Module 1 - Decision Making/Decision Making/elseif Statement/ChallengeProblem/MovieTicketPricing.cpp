/* Movie Ticket Pricing
Rules:
Age	Ticket Type
< 5	Free
5–17	Child Ticket
18–59	Adult Ticket
≥ 60	Senior Citizen Ticket
Print the correct ticket category. 
*/

# include<iostream>
# include<string>
    using namespace std;

    int main(){
        int Age;
        string TicketType;
        cout <<"Enter Yours Age :- ";
        cin >> Age;

        if(Age<5){
            TicketType = "Free";
        }

        else if(Age >= 5 && Age <= 17){
            TicketType = "Child Ticket";
        }

        else if(Age >= 18 && Age <= 59){
            TicketType = "Adult Ticket";
        }

        else {
            TicketType = "Senior Citizen Ticket";
        }

        cout <<"Ticket Type :- " << TicketType;

        return  0;
    }