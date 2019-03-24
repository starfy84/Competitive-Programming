import math

for x in range(int(input())):
    num = int(input())
    if num > 33:
        print (0)
    else:
        print(math.factorial(num) % 2**32)
