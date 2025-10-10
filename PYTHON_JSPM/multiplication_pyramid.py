# row = 4
# instance = 1
# for i in range(1, (row+1)):
#     for j in range(1, (i+1)):
#         print(f"{2*instance} ", end = "")
#         instance+=1
#     print("")
row = 4
instance = 10
for i in range(1, (row+1)):
    for j in range(1, (row-i+2)):
        for spaces in range(1,(row - (row-i+2))):
            print(" ", end ="")
    print(f"{2*instance} ", end = "")
    instance-=1
    print("")
