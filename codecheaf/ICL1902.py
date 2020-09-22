import math
import sys
sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n = int(input())
    k = n
    c = 0
    while(k>0):
        sq = int(math.sqrt(k))
        k = k - (sq**2)
        c += 1
    print(c)