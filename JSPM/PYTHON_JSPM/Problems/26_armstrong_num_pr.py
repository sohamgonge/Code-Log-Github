arm= input("Enter a number :")
i=0
checker=0
for ch in arm:
    checker+=(int(arm[i])**len(arm))
    i+=1
if checker == int(arm):
    print("You entered an armstrong number")
else:
    print("Entered number is not an armstrong number")