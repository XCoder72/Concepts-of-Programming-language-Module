"""
Operation	
Create - q = deque()
Insert - q.append(x)
Remove front - q.popleft()
View front - q[0]
View rear - q[-1]
Check empty - not q
Get size - len(q)
"""

from collections import deque

# Creating Queue
q = deque()

# Inserting elements in Queue
q.append(10)
q.append(20)
q.append(50)

# View front and rear elements of Queue
print("View front and rear elements of Queue:")
print("Front:-", q[0])
print("Rear:-", q[-1])
print()

# Traversing Queue
print("Elements in Queue:")
for element in q:
    print(element, end=" ")
print()

# Recreating Queue for next operations
q.append(10)
q.append(20)
q.append(50)

print()

# Remove elements from Queue
print("Removing elements from Queue:", end=" ")
q.popleft()

while q:
    print(q.popleft(), end=" ")
print()

# Recreating Queue
q.append(10)
q.append(20)
q.append(50)

print()

# Checking size of Queue
print("Size of Queue:", len(q))
print()

# Checking whether Queue is empty or not
print("Checking whether Queue is empty or not:")

if not q:
    print("Queue is empty")
else:
    print("Queue is not empty")

print()