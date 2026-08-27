/*
A dynamic array can grow or shrink during program execution.
In C++, the vector class is a dynamic array that can change its size during runtime. 
It provides various member functions to manage the elements, such as adding, removing, and accessing elements. 
The vector class is part of the Standard Template Library (STL) and is defined in the <vector> header file.

Key Conceptsvector
Vector use indexing starting from 0.
Vector can grow dynamically.
Access by index is typically O(1).
Adding at the end is amortized O(1).
Inserting/deleting in the middle requires shifting elements → O(n).

Sytax:
#include <vector>
vector<type> vector_name; // Create a vector of specified type

operations:
1. Adding elements at the end of the vector:
   * Push_back() - Add element at the end
2. Accessing elements by index:
   * operator[] - Access element at specified index
3. legth of vector:
   * size() - Returns the number of elements in the vector
4. removing elements from the end of the vector:
   * pop_back() - Remove the last element
5. inserting elements in the middle of the vector:
   * insert() - Insert element at specified position
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v; // Create a vector of integers
    v = {1, 2, 3, 4, 5}; // Initialize the vector with values
    /*
    Index:   0   1   2   3   4
             ↓   ↓   ↓   ↓   ↓
             1   2   3   4   5
    */ 
    // Operations on vector:
    // traversing elements using index
    cout << "\ntraversing elements using index: " << endl;
    for(int i = 0; i < v.size(); i++){
        cout << "Element at index " << i << ": " << v[i] << endl;
    }

    // Accessing elements using Index.
    cout << "\nAccessing elements using Index: " << endl;
    cout << v[1] << endl; // Accessing element at index 1

    // Adding elements at the end of the vector
    cout << "\nAdding elements at the end of the vector: " << endl;
    v.push_back(6); // Adding element 6 at the end
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    // Removing elements from the end of the vector
    cout << "\nRemoving elements from the end of the vector: " << endl;
    v.pop_back(); // Removing the last element
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    // Length of vector
    cout << "\nLength of vector: " << endl;
    cout << v.size() << endl;

    // updating elements in the vector
    cout << "\nUpdating elements in the vector: " << endl;
    v[2] = 10; // Updating element at index 2
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    // Inserting elements in the middle of the vector
    cout << "\nInserting elements in the middle of the vector: " << endl;
    v.insert(v.begin() + 2, 15); // Inserting element 15 at index 2
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
    
}
