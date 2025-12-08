marks = {
    "Harry": 100,
    "Shubham":56,
    "Rohan" : 23
}

print(marks.items())
print(marks.keys())
print(marks.values())
marks.update({"Harry":99, "Renuka" : 100})
print(marks)

print(marks.get("Harry2"))#returns none
print(marks["Harry2"])# returns an error
# pop, popitem