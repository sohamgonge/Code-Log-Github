# Assignment 4: String Operations

text = input("Enter a string: ")

# Concatenation and repetition
print("Concatenation Example:", text + " Python")
print("Repetition Example:", text * 2)

# Indexing and slicing
print("First character:", text[0])
print("Last character:", text[-1])
print("Sliced string (first 3 chars):", text[:3])

# Built-in methods
print("Is alphabetic?", text.isalpha())
print("Is digit?", text.isdigit())
print("Is space?", text.isspace())

# Count vowels and consonants
vowels = "aeiouAEIOU"
v = 0
c = 0

for ch in text:
    if ch.isalpha():
        if ch in vowels:
            v += 1
        else:
            c += 1

print("Vowels:", v)
print("Consonants:", c)