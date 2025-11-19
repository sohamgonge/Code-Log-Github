pali=input("Enter a number to check if its a palindrome or not")
ndrome=pali[::-1]
if(pali == ndrome):
    print("Its a palindrome")
else:
    print("Its not a palindrome")