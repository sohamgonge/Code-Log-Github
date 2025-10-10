instance = 1
row =5

for i in range(1,(row+1)):
    j = 0
    for spaces in range(1, (i)):
        spaces=1
        print("  ", end = ""*(row-i))
    while (j<=(row-i)):
        if(instance%2!=0):
            print("a ", end="")
            instance+=1
        else :
            print("b ", end ="")
            instance+=1
        j+=1
    print("")
