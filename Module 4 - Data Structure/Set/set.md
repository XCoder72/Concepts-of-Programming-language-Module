* Definition:

A set stores a collection of unique elements. Unlike a list/array, a set is mainly used when we care about membership and uniqueness, not element position.

* Key Concepts

1. Duplicate values are automatically removed.
2. Sets are primarily used for membership testing.
3. Normal Python set and C++ unordered_set are hash-based.
4. Indexing like set[0] is not supported.

* Set Operation:

1. Union - All elements from both sets.
2. Intersection - Elements common to both.
3. Difference - Elements present in A but not in B.
4. Symmetric Difference - Elements present in either set,
                          but not both.

* Practice Problem:

Easy
Unique Values
Given:
[10, 20, 10, 30, 20, 40, 30]
Create a set and print the unique values.

Expected concept:
Unique values → 10, 20, 30, 40
Bonus: Count how many unique values exist.

Medium
1Common Students
Two classes have student IDs:
Class A = {101, 102, 103, 104, 105}
Class B = {103, 104, 105, 106, 107}

Find:

1. Students present in both classes.
2. Students present only in Class A.
3. Students present only in Class B.
4. Students present in either class.

Expected:
Common → {103, 104, 105}
Only A → {101, 102}
Only B → {106, 107}
Either → {101,102,103,104,105,106,107}

Duplicate Detector
Given student IDs:
[101, 102, 103, 101, 104, 105, 102, 106, 103]

Find:
Duplicate IDs: 101 102 103
Unique IDs:    101 102 103 104 105 106
Restriction: Don't use a separate sorting algorithm.

Challenge
Take the IDs as user input and determine:
Total IDs
Unique IDs
Duplicate IDs
Number of duplicates