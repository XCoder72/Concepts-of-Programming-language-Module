# Create a calculateSalary() function:

def calculateSalary(basicSalary,bonus=0,tax= 0):
    return basicSalary + bonus - tax 

print(calculateSalary(50000))
print(calculateSalary(50000,5000))
print(calculateSalary(100000,10000,20000))