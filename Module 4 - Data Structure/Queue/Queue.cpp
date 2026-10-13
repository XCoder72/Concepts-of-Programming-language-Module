/* 
C++ provides std::queue through the <queue> header.
Operation	Syntax
Create	queue<int> q;
Insert	q.push(x);
Remove	q.pop();
View front	q.front();
View rear	q.back();
Check empty	q.empty();
Get size	q.size();
*/

# include <iostream>
# include <queue>
using namespace std;

int main() {
   
    // Creating Queue
    queue <int> q;

    //Inserting elements in Queue
    q.push(10);
    q.push(20);
    q.push(50);

    // View front and rear elements of Queue
    cout << "View front and rear elements of Queue: "<<endl;
    cout <<"Front:- "<<q.front()<<endl;
    cout <<"Rear:- "<<q.back()<<endl;
    cout <<endl;

    // travsing Queue
    cout <<"Elements in Queue: "<<endl;
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    q.push(10);
    q.push(20);
    q.push(50);

    cout <<endl;

    // remove elements from Queue
    cout << "Removing elements from Queue: ";
    q.pop();

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    q.push(10);
    q.push(20);
    q.push(50);

    cout <<endl;
    
    // Checking size of Queue
    cout <<"Size of Queue: "<<q.size()<<endl;
    cout <<endl;

    // Checking whether Queue is empty or not
    cout <<"Checking whether Queue is empty or not: "<<endl;
    if(q.empty()) {
        cout <<"Queue is empty"<<endl;
    } else {
        cout <<"Queue is not empty"<<endl;
    }
    cout <<endl;
}