"""Airport Security
Conditions:
Valid Passport
Valid Visa
Security Clearance
If all conditions are satisfied:
Boarding Allowed
Otherwise:
Boarding Denied"""

validPass = True
validVisa = True
securityClear = True

if validPass:
    if validVisa:
        if securityClear:
            print("Boarding Allowed")
else:
    print("Boarding Denied")

# another Way using Logical Operator

if validPass and validVisa and securityClear:
    print("Boarding Allowed")
else:
    print("Boarding Denied")
