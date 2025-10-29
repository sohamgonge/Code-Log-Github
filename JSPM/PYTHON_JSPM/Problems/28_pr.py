a = input("Enter : ")
length = len(a)
# print(a[1])
spaces = 0
for i in range (0, length):
    if (a[i]==' '):
        spaces +=1
print(f"{a} has total of {spaces+1} words")