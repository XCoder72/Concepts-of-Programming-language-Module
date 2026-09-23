string = input("Enter String :- ")
Reverse_string = []
ReverseString = ''

def reverse_string(string):
  for i in range(0,len(string)):
    Reverse_string.append(string[i])

  for i in range(0,len(string)):
    Reverse_string[-1] += 'ReverseString'
    Reverse_string.pop()

reverse_string(string)
print(ReverseString)