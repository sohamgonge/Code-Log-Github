num=[69,70,89,84,88,90,103,10,20,29,23]
def secondlargest(num):
    max=num[0]
    for i in range(0,len(num)):
        if(max<num[i]):
            max=num[i]
    min = num[0]
    for i in range(0,len(num)):
        if(num[i]>min and num[i]<max):
            min = num[i]
    return min
print(f"{secondlargest(num)}, is the second largest number in the given list")