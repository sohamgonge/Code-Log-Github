import os

# Correct the path to where "New folder" actually exists
directory_path = '/'   # relative path (if it's next to your script)
# directory_path = '/Users/yourusername/Desktop/New folder'  # absolute path example

try:
    contents = os.listdir(directory_path)
    for item in contents:
        print(item)
except FileNotFoundError:
    print(f"Error: Directory '{directory_path}' does not exist.")
