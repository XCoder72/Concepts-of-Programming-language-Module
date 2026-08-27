* Definition:
An array stores multiple values of the same type in a contiguous sequence of memory locations. Each element is accessed using an index, usually starting from 0.

Array → Same type + Indexed + Ordered

* Key Concepts
Indexing starts at 0.
Elements are stored in order.
Direct access using index is O(1).

* Array Operations

Traversal → Access → Update → Search → Insert/Delete
> Traversal
  Visit every element one by one.
> Access
  Get an element using its index.
> Update
  Change an existing element.
> Searching
  Find whether an element exists.
> Insertion
  Suppose:
  10 20 30 40
  We want to insert 25 at index 2.
  We need to shift elements:
  Before:
  10 20 30 40
  Shift:
  10 20 → 30 → 40
  After:
  10 20 25 30 40
> Deletion
  Suppose:
  10 20 30 40 50
  Delete the element at index 2:
  10 20 30 40 50
        X
  Shift elements left:
  10 20 40 50
* Operation Complexity
>Operation Array
>Access-O(1)
>Update-O(1)
>Traversal-O(n)
>Search-O(n)
>Insert-O(n)
>Delete-O(n)
* Flow:

* Practice Problem: