students = {}
def inputdata():
    ID=int(input("Enter a ID No. for the student data :"))
    Name=input("Enter a Name for the student data :")
    Age=int(input("Enter a Age for the student data :"))
    Grades=input("Enter Grades for the student data :")
    students[ID]= {"name":Name,"age":Age,"grade":Grades}
def p(ID):
    print("\n")
    print("Student ID : ",ID)
    print("Name : ",students[ID]["name"])
    print("Age : ",students[ID]["age"])
    print("Grade :",students[ID]["grade"])
    print("\n")
def display():
    if (len(students)>0):
        for ID in students:
            p(ID)
    else:
        print("No Student Record Found")
    
def search():
    inid=int(input("Enter the ID : "))
    if inid in students:
        p(inid)
    else:
        print("No Student Record Found")
def remove():
    inid=int(input("Enter the ID : "))
    if inid in students:
        p(inid)
        del students[inid]
        print("Student deleted successfully!")
    else:
        print("No Student Record Found")
def update():
    inid=int(input("Enter the ID : "))
    if inid in students:
        p(inid)
        Grades = input("Enter the Grade :")
        students[inid]["grade"] = Grades
        print("Student Grade Updated Successfully!")
    else:
        print("No Student Record Found")


i = 1
while (i==1):
    print(
    '''
    1. Input Student Data
    2. View Student Data
    3. Search Student By ID
    4. Delete Student Record By ID
    5. Update Students Grades List(add/ modify grades)
    6. Exit
    '''
    )
    choice = int(input("Enter the Sr. No From the Given List : "))

    if (choice==1):
        inputdata()
    elif(choice==2):
        display()
    elif(choice==3):
        search()
    elif(choice==4):
        remove()
    elif(choice==5):
        update()
    elif(choice==6):
        i = 0