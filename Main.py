A = input("First_Number: ")
B = input("Second_Number: ")
C = input("Operation: ")

if C == "sum" :
    print( float(A) + float(B))
elif C == "subtraction":
    print( float(A) - float(B))
elif C == "multiplication":
    print( float(A) * float(B))
elif C == "power":
    print( float(A) ** float(B))
elif C == "division":
    print( float(A) / float(B))
else:
    print("type sum, subtraction, power or division in operation to work")