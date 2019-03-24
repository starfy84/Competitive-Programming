import sys
rickroll = ['4', '9', 'Q', 'Q', 'W', 'X', 'c', 'd', 'g', 'w', 'w']
inp=sys.stdin.read()

rick = False
for x in range(0,len(inp)-10):
    if sorted(inp[x:x+11]) == rickroll:
        rick = True
        break

print('rickroll' if rick else 'not a rickroll')