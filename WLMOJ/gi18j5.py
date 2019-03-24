n = int(input())
ans = 0
cur = 0
ma = 0
mai = 0
for i in range(n):
    a = int(input())
    ans += cur * a
    cur += a
    if ma < ans:
        mai = i
        ma = ans
print(mai+1)