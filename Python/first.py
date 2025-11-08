number = int(input("Enter a number : ")) #153
str_number = str(number) #153
length = len(str_number) #3
int_length = int(length) #3
lists = []
for i in range (0,length):
    digit = str_number[i] #5^3 = 125
    digit = int(digit)
    digit = digit**int_length
    lists.append(digit) #[1,125,27]
answer = sum(lists)
if(answer == number):
    print("Your number is Armstrong Number.")
else:
    print("Your number is not Armstrong number")

