# 1. Create and write to a file
def create_and_write_file(filename):
    with open(filename, "w") as f:
        f.write("This is the first line.\n")
        f.write("Python file handling is simple.\n")
    print("File created and written successfully.")


# 2. Read a text file
def read_file(filename):
    print("\nReading file contents:")
    with open(filename, "r") as f:
        print(f.read())


# 3. Append new lines to the file
def append_to_file(filename, new_text):
    with open(filename, "a") as f:
        f.write(new_text + "\n")
    print("New line appended successfully.")


# 4. Search for a string in the file
def search_in_file(filename, search_term):
    found = False
    with open(filename, "r") as f:
        for line_no, line in enumerate(f, start=1):
            if search_term.lower() in line.lower():
                print(f"Found '{search_term}' on line {line_no}: {line.strip()}")
                found = True

    if not found:
        print(f"'{search_term}' not found in the file.")


# Main program execution
filename = input("Enter the File Name to Create/Read : ")

# 1. Create and write
create_and_write_file(filename)

# 2. Read
read_file(filename)

# 3. Append
a = input("Enter a string to append in the file. ")
append_to_file(filename, a)

# 4. Read again
read_file(filename)

# 5. Search
search_in_file(filename, "python")