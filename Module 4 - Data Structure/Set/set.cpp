/*
Set - a collection data structure that stores unique elements
for using set In C++ we need to include the header file 
* #include<set> - Sorted (Ascending by default)
* #include<unordered_set> - Unsorted (Hash Table)
The set data structure is implemented as a balanced binary search tree, 
which allows for efficient insertion, deletion, and lookup operations.

syntax for creating a set:
set<type> set_name; // for sorted set
unordered_set<type> unordered_set_name; // for unsorted set

operations on a set include:
1. Insertion: Adding an element to the set.
* insert() - Inserts an element into the set. If the element already exists, it will not be added again.
2. Deletion: Removing an element from the set.
* erase() - Removes an element from the set.
3. Search: Checking if an element exists in the set.
* find() - Returns an iterator to the element if it exists, otherwise returns end().
4. Traversal: Iterating through the elements of the set in sorted order.
*/

#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

set<int>sorted_set; // create a sorted set of integers
sorted_set = {5, 2, 8, 1, 3}; // initialize the set with some values
unordered_set<int>unsorted_set; // create an unsorted set of integers
unsorted_set = {5, 2, 8, 1, 3}; // initialize the unsorted set with some values

// traversing the sorted/unsorted set
cout << "Elements in the sorted set: ";
for (int id : sorted_set) {
    cout << id << " ";
}
cout << endl;

cout << "Elements in the unsorted/unordered set: ";
for (int id : unsorted_set) {
    cout << id << " ";
}
cout << endl;

// adding an element to the sorted/unsorted set
cout << "Adding element to the sorted/unsorted(unordered) set." << endl;
sorted_set.insert(4);
unsorted_set.insert(4);
for (int id : sorted_set) {
    cout << id << " ";
}
cout << endl;

for (int id : unsorted_set) {
    cout << id << " ";
}
cout << endl;

// removing an element from the sorted/unordered set
cout << "Removing element from the sorted/unsorted(unordered) set." << endl;
sorted_set.erase(8);
unsorted_set.erase(8);
for (int id : sorted_set) {
    cout << id << " ";
}
cout << endl;

for (int id : unsorted_set) {
    cout << id << " ";
}
cout << endl;

// checking if an element exists in the sorted set
cout << "Checking if element exists in the sorted/unsorted(unordered) set: \n";
if (sorted_set.find(3) != sorted_set.end()) {
    cout << "Element 3 exists in the sorted set." << endl;
} else {
    cout << "Element 3 does not exist in the sorted set." << endl;
}
if (unsorted_set.find(3) != unsorted_set.end()) {
    cout << "Element 3 exists in the unsorted set." << endl;
} else {
    cout << "Element 3 does not exist in the unsorted set." << endl;
}

}
