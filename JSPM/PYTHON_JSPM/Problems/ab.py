instance = 1
row =5
for i in range(1,(row+1)):
    for j in range (1, (i+1)):
        if(instance%2!=0):
            print("a", end=" ")
            instance+=1
        else :
            print("b", end =" ")
            instance+=1
    print("")
