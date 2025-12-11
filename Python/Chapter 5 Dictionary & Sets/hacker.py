n = int(input())
student={}
for i in range(0,n):
    data = input().split()
    name = data[0]
    m1 = int(data[1])
    m2 = int(data[2])
    m3 = int(data[3])
    student[name]={"m1":m1,"m2":m2,"m3":m3,}
print(student[name].values())