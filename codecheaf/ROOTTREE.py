import sys
from collections import Counter
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n = int(input())
    IN = []
    OUT = []
    for i in range(n - 1):
        x, y = map(int, input().split())
        OUT.append(x)
        IN.append(y)
    total = 0
    freq = Counter(IN)
    for j in freq.values():
        if(j == 0):
            total += 1
    print(total - 1)

