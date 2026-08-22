# Multiple return Statements
def checknumber(n):
    if n > 0:
        return "Positive"
    elif n < 0:
        return "Negative"
    else:
        return "Zero"

print(checknumber(10))
print(checknumber(-1))
print(checknumber(0))
