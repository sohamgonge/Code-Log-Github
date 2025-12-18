a = int(input("Enter a number"))
if(a>0):
    print(f"{a} is a positive number.")
elif(a<0):
    print(f"{a} is a negative number.")
else:
    print(f"{a} is Zero.")
print("Printing numbers 1 to 10")
for i in range(1, 11):
    if i == 2:
        pass
    if i == 4:
        print("Skipping", i)
        continue
    if i == 8:
        print("Stopping the loop at", i)
        break

    print("Current number:", i)