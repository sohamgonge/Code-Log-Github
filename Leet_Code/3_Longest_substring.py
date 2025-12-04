
maxlen=0
s = "pwwkew"
for i in range(0,len(s)):
    list=[]
    for j in range(i,len(s)):
        print(f"{i} : i,  {j} : j")
        print()
        if s[j] in list:
            break
        else:
            list.append(s[j])
            print(list)
            if (len(list)>maxlen):
                maxlen=len(list)
print(f"Maxlength = {maxlen}")