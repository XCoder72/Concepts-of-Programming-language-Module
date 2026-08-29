"""
Take the IDs as user input and determine:
Total IDs
Unique IDs
Duplicate IDs
Number of duplicates
"""
set_of_ids = list(map(int, input("Enter the IDs: ").split()))
unique_ids = set(set_of_ids)
duplicate_ids = []

for id in unique_ids:
    if set_of_ids.count(id) > 1:
        duplicate_ids.append(id)

print("Total IDs:", len(set_of_ids))
print("Unique IDs:", len(unique_ids))
print("Duplicate IDs:", duplicate_ids)
print("Number of duplicates:", len(duplicate_ids))
