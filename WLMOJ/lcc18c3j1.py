n = int(input())
for i in range(n):
    inp = input().split()
    s,p = inp[0],int(inp[1])
    if p > 9001:
        print(s)