salary=int(input("Enter your Salary in INR:"))
if(salary<=10000):
    print("Your total salary + bonus is: "+ str(salary+(salary*0.1)))
elif(salary>10000 & salary<=20000):
    print("Your total salary + bonus is: "+ str(salary+(salary*0.2)))
elif(salary>20000):
    print("Your total salary + bonus is: "+ str(salary+(salary*0.4)))