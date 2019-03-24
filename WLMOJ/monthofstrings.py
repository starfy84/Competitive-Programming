string = input().upper()
if string.count('AUGUST')>=1:
    print('NOU')
else:
    string = ''.join(reversed(string)).replace('A','S')
    print(string)