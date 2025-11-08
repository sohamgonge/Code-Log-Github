# students = {
#     "101": {"name": "Aarav", "age": 18, "grades": [90]},
#     "102": {"name": "Riya", "age": 19, "grades": [85]}
# }
# Assignment 2: Student Record Management (One Grade Per Student)

students = {}   # empty dictionary to store student data
enter=1
while (enter == 1):
    print("\n1. Add Student")
    print("2. Display All Students")
    print("3. Search by ID")
    print("4. Delete by ID")
    print("5. Update Grade")
    print("6. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        sid = input("Enter Student ID: ")
        name = input("Enter Student Name: ")
        age = int(input("Enter Student Age: "))
        grade = (input("Enter Student Grade: "))

        students[sid] = {"name": name, "age": age, "grade": grade}
        print("Student added successfully!")

    elif choice == 2:
        print("\nAll Student Records:")
        if len(students) == 0:
            print("No records found.")
        else:
            for sid in students:
                info = students[sid]
                print("ID:", sid)
                print("Name:", info["name"])
                print("Age:", info["age"])
                print("Grade:", info["grade"])
                print()

    elif choice == 3:
        sid = input("Enter Student ID to search: ")
        if sid in students:
            print("Student found:")
            print("Name:", students[sid]["name"])
            print("Age:", students[sid]["age"])
            print("Grade:", students[sid]["grade"])
        else:
            print("Student not found.")

    elif choice == 4:
        sid = input("Enter Student ID to delete: ")
        if sid in students:
            del students[sid]
            print("Student deleted successfully!")
        else:
            print("Student not found.")

    elif choice == 5:
        sid = input("Enter Student ID to update grade: ")
        if sid in students:
            new_grade = (input("Enter new grade: "))
            students[sid]["grade"] = new_grade
            print("Grade updated successfully!")
        else:
            print("Student not found.")

    elif choice == 6:
        print("Exiting program...")
        enter=0

    else:
        print("Invalid choice, please try again.")