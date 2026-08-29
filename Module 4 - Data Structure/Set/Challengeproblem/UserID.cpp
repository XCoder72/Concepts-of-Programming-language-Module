/*
Take the IDs as user input and determine:
Total IDs
Unique IDs
Duplicate IDs
Number of duplicates
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, id;
    vector<int> ids;
    set<int> uniqueIds;
    set<int> duplicates;

    cout << "Enter number of IDs: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> id;

        ids.push_back(id);
        uniqueIds.insert(id);
    }

    for(int id : uniqueIds)
    {
        int count = 0;

        for(int x : ids)
        {
            if(x == id)
                count++;
        }

        if(count > 1)
            duplicates.insert(id);
    }

    cout << "Total IDs: " << ids.size() << endl;
    cout << "Unique IDs: " << uniqueIds.size() << endl;

    cout << "Duplicate IDs: ";
    for(int id : duplicates)
        cout << id << " ";

    cout << "\nNumber of duplicates: " << duplicates.size();

    return 0;
}