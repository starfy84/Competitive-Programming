digits = ['0','1','2','3','4','5','6','7','8','9']
characters = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
inp = str(input())

isEnglish = False
isMath = False
for c in inp:
    if c in characters:
        isEnglish = True
    if c in digits:
        isMath = True

if isEnglish and isMath:
    print('Other')
elif isEnglish:
    print('English')
else:
    print('Math')