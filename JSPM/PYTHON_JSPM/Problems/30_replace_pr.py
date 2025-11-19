a = input("Enter : ")
length = len(a)
# print(a[1])
spaces = 0
# for i in range (0, length):
#     if (a[i]==' '):
a = a.replace(" ", "-")
print(f"all the spaces have been replaced by - in the given sentence and it looks like this : {a}")