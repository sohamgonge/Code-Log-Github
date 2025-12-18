a = 10
def add(a, b):
    return a + b
def local():
    a = 5   # local variable
    print(f"{a} is the value of a in Local Scope")

res= add(3, 4)
print(f"{a} is the value of a in Global Scope")
local()
print("Sum of two numbers:", res)