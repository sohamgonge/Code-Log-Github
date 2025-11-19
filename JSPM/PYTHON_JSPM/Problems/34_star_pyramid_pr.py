# row = 5
# spaces = 1
# for i in range (1,(row+1)):
#     while(spaces<=(row-i)):
#         print(" ",end="")
#         spaces+=1
#     print("*"*((2*i)-1))
#     spaces = 1
# row = 4
# spaces = 1
# for i in range (1,(row+1)):
#     for spaces in range(0, (row-i)):
#         print(" ",end="")
#     print("*"*((2*i)-1))
row = 4
for i in range (1,(row+1)):
    print(" "*(row-i),end="")
    print("*"*((2*i)-1))