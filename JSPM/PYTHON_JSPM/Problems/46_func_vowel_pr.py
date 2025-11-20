ch = 'j'
def vowel(ch):
    char='aeiouAEIOU'
    if ch in char:
        return True

    return False
a = vowel(ch)
if(a):
    print("Its a Vowel")
else:
    print("Its a Consonant")