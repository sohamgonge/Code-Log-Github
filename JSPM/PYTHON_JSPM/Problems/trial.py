n = int(input("Enter the number of rows : "))
for i in range(1,n+1):
    print(" "*(n-1),end="")
    n-=1
    print("*"*(2*i-1),end="")
    print()
for i in range(n,0,-1):
    print(" "*(n-1),end="")
    n+=1
    print("*"*())