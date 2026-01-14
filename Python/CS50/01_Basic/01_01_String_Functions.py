# Ask user for their name 
# name = input("What's your name? ")

'''
Multi-line Comments 
'''
# Say hello to user
# print(name)

# Pseuddocode is what we can do using comments

# print("hello, "+name) Concatination

# print("hello,",name)#takes in multiple arguments and adds space automatically

# print("hello, ", end="")

# #overriding default value of end="\n"
# print(name)

# print("hello,",name,sep="????")

'''
name parameter ---> Optional
sep and end are name parameters 

whereas what we are printing and the argument name we are passing only work if they are in a certain position of the function so they are called as ---->Positional Parameters
'''

# print('hello, "friend"')
#         OR
# print("hello, \"friend\"")# using escape sequence character

# Remove whitespaces from str
# name = name.strip()
#lstrip and rstrip to strip whitespaces from either left or right most side of the string

#Capitalize user's name
# name = name.capitalize()

#Title capitalizes each word of the sentence
# name = name.title()

#chaining
# name = name.strip().title
name = input("What's your name? ").strip().title()

#Spliting users name into first name and last name
first, last = name.split(" ")

print(f"hello, {first}")
#new feature of python fstring  