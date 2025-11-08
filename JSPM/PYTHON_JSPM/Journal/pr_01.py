a = int(input("Enter the first number: "))
b = int(input("Enter the Second number: "))
c = input("Enter the Operation (+,-,*,/)")

if(c=='+'):
    print(f"{a} + {b} = ", a+b)
elif(c=='-'):
    print(f"{a} - {b} = ", a-b)
elif(c=='*'):
    print(f"{a} * {b} = ", a*b)
elif(c=='/'):
    print(f"{a} / {b} = ", a/b)
else:
    print("Enter an Valid Operator")