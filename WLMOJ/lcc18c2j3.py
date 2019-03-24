java = False
dereck = False
a = ['c', 'd', 'e', 'e', 'k', 'r']
str = input().replace("3", "e").replace("5","s").replace("@", "a").replace("7", "t").replace("1", "i");

if str.count('biginteger') >= 1 or str.count('apics') >= 1:
    java = True
for i in range(len(str)-5):
    if sorted(str[i:i+6]) == a:
        dereck = True
        break
print('Right Dere(c)k!' if java == dereck else 'Wrong Dere(c)k!')