a = int(input())
b=[]
maxi = -101
for i in range(0, a):
    x = int(input())
    b.append(x)
    if(maxi<b[i]):
        maxi = b[i]
runnerup=-101
for i in range(0,a):
    if(runnerup<b[i] and b[i]<maxi):
        runnerup = b[i]
print(runnerup)