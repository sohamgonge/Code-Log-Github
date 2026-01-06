students = ["Hermione","Harry","Ron"]

# print(students[0])
# print(students[1])
# print(students[2])

# for _ in students:
#     print(_) its right but a lot cryptic
# for student in students:
#     print(student)
for i in range(len(students)):
    print(i+1, students[i])