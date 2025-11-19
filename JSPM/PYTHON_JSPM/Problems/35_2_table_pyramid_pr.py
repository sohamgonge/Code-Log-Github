#       2
#    4 6 8
# 10 12 14 16 18
row = 3
tab = 1
for i in range (1,(row+1)):
    print(" "*(2*(row-i)),end="")
    for j in range(1, (2*i)):
        print(f"{2*tab} ", end="")
        tab+=1;
    print("")