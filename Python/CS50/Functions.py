# def hello(to="world"):
#     print("hello,",to)
# hello()
# name = input("What's your name? ")
# hello(name)

# # *****************To Organize file*********************** #
# def main():
#     name = input("What's your name? ")
#     hello(name)

# def hello(to="world"):
#     print("hello,",to)
#     # print("hello",name) this won't work here but would have worked earlier as the scope of name is now limited

# main()

# # *****************Function Returning Value*********************** #

def main():
    x = int(input("What's x? "))
    print("x squared is", square(x))

def square(n):
    # return n*n
    # return n**2
    return pow(n,2)

main()