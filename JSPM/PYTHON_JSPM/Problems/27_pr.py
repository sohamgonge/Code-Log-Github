a = input("Enter : ")
length = len(a)
# print(a[1])
v = 0
c = 0
for i in range (0, length):
    if ((a[i]=='a') or (a[i]=='e') or (a[i]=='i') or (a[i]=='o') or (a[i]=='u') or (a[i]=='A') or (a[i]=='E') or (a[i]=='I') or (a[i]=='O') or (a[i]=='U')):
        v +=1
    else:
        c+=1
print(f"{a} has total of {v} vowels and {c} consonants")