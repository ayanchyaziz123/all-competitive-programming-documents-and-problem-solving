import math
import sys

sys.stdin = open("input.txt", "r")
for i in range(int(input())):
    x, y = input().split()
    x = int(x)
    y = int(y)
    z = x + y
    count = 0
    while(z > 0):
        if z % 10 == 0:
            count += 6
        if z % 10 == 1:
            count += 2
        if z % 10 == 2:
            count += 5
        if z % 10 == 3:
            count += 5
        if z % 10 == 4:
            count += 4  
        if z % 10 == 5:
            count += 5
        if z % 10 == 6:
            count += 6 
        if z % 10 == 7:
            count += 3
        if z % 10 == 8:
            count += 7
        if z % 10 == 9:
            count += 6
        z //= 10
    print(count) 
                                            

