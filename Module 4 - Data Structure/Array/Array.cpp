/* Traditional C++ arrays have a fixed size.
<datatype> <array_name>[<size>] = {<value1>, <value2>, <value3>, ...};

operations on arrays:
1. size of array - sizeof(array_name)/sizeof(array_name[0])
* sizeof(array_name) gives the total size of the array in bytes.
* sizeof(array_name[0]) gives the size of a single element in the array in bytes

For using specific Operations on arrays,
use array library,
* #include<array>
*/

# include<iostream>
    using namespace std;

    int main(){
        
int arr[5] = {10, 20, 30, 40, 50};  // array of size 5 

/*
Index:   0   1   2   3   4
         ↓   ↓   ↓   ↓   ↓
Values:  10  20  30  40  50
*/

// Operation on Array
// size of array
cout << "Size of the array: " << endl;
cout << sizeof(arr)/sizeof(arr[0]) << endl;  // Output: 5

// Traversal
cout << "\nTraversal of Array elements: " << endl;
for(int i = 0; i < 5; i++){
    cout << arr[i] << endl;
}

// Accessing an element
cout << "\nAccessing an element at index 2: " << endl;
cout << arr[2] << endl;  // Output: 30

// Updating an element
cout << "\nUpdating an element at index 3: " << endl;
arr[3] = 100;  // Update the value at index 3
cout << arr[3] << endl;  // Output: 100

// searching an element
cout << "\nSearching for an element (20): " << endl;
int searchValue = 20;
for(int i = 0; i < 5; i++){
    if(arr[i] == searchValue){
        cout << "Element found at index: " << i << endl;
        break;
    }
}

// inserting an element (Note: In traditional arrays, you cannot change the size, so we can only update an existing index)
cout << "\nInserting an element (25) at index 2: " << endl;
int Arr[10] = {10, 20, 30, 40};
int n = 4;
int pos = 2;
int value = 25;

for(int i = n; i > pos; i--)
{
    Arr[i] = Arr[i - 1];
}

Arr[pos] = value;
n++;

cout << "Array after insertion: ";
for(int i = 0; i < n; i++){
    cout << Arr[i] << " ";
}

cout << endl;

// deleting an element (Note: In traditional arrays, you cannot change the size, so we can only shift elements to "remove" an element)n = 5;
cout << "\nDeleting an element at index 2: " << endl;
int Pos = 2;
for(int i = Pos; i < n - 1; i++)
{
    Arr[i] = Arr[i + 1];
}

n--;

cout << "Array after deletion: ";
for(int i = 0; i < n; i++){
    cout << Arr[i] << " ";
}

return  0;
}