from math import *
inp = input().split(" ")
n = int(inp[0])
r = int(inp[1])
fives = 1
for i in range(n):
    a = int(input())
    fives = (fives*a)//gcd(fives,a)
print((fives+r) % (10**9+7))