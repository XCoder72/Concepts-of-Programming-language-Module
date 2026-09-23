""" A dictionary stores data as key → value pairs. 

Key Concepts
- Every key should be unique.
- A key is used to find its associated value.
- Values can be duplicated.
- Useful for fast lookup by key.
- dict / unordered_map are hash-based; C++ map keeps keys sorted.

operation 
Create	      {}	
Access	      d[key]	
Add	          d[key]=value	
Update	      d[key]=value	
Delete	      del d[key]	
Search key	  key in d	
Size	      len(d)	
Clear	      d.clear()	
Traverse	  d.items()
"""

# Create An Dictionory
print("Create An Dictionary")
student = {
    "name": "Rahul",
    "age": 20,
    "marks": 85
}
print()

print(student)
print()

print("Traversing")
for key, value in student.items():
    print(key, ":", value)

print()

# Accessing A Value
print("Accessing A Value")
print(student["name"])
print(student["age"])
print(student["marks"])

print()

# Adding / Updating
print("Adding / Updating")
student["City"] = "Bhopal" # Adding An key-Values
student["marks"] = 90 # Updating An existing key-Value
student["address"] = "21 street" # Updating An existing key-Value

print(student)
print()

# Delete
print("Delete")
del student["address"] # Deleting An key-Value
print(student)

print()

# Traverse 
print("Check Whether Key Exists")
if "Rahul" in student["name"]:
    print("Found")
else :
    print("Not Found")

print()

# Size of Dictionary
print("Size of Dictionary")
print(len(student))

print()

# Clear Dictionary
print("clear")
student.clear()
print(student)

print()