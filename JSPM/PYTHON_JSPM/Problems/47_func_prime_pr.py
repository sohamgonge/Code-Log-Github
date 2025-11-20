num = int(input("Enter a number :"))
def prime_not(num):
    a = True
    if(num == 2):
        return True
    if(num<2):
        return False
    for i in range(2, num):
        if(num%i==0):
            return False
    return(a)
a = prime_not(num)
if(a):
    print("Its a prime num")
else:
    print("Its not a prime num")
