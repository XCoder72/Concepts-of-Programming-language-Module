* Definition:
A data structure is a way of organizing and storing data so that it can be accessed and modified efficiently.

* Key Concepts
Data → information we want to store.
Structure → how that data is organized.
Different structures are suitable for different problems.
Good data-structure choice can improve time and memory efficiency.
Common structures: Array, List, Stack, Queue, Tree, Graph, Hash Table.

* Real-World Application — Student Marks

Suppose we need to store marks of 5 students:

75  → Student 1
82  → Student 2
91  → Student 3
68  → Student 4
88  → Student 5

Instead of creating:

mark1
mark2
mark3
mark4
mark5

we can organize them together:

[75, 82, 91, 68, 88]

This is an array/list-like data structure.

* Why Do We Need Data Structures?

Consider storing 1,000,000 student records.

Different requirements need different structures:

Need                         Suitable structure
────────────────────────────────────────────────
Sequential data              Array / List
Last-in-first-out            Stack
First-in-first-out           Queue
Fast key-based lookup        Hash Table
Hierarchical data            Tree
Network connections          Graph

Choosing the right structure is a major part of DSA problem solving.

* Data Structure Classification
Data Structures
│
├── Linear
│   ├── Array
│   ├── List
│   ├── Stack
│   └── Queue
│
└── Non-Linear
    ├── Tree
    └── Graph