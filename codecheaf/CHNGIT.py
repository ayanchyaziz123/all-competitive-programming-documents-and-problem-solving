import sys
from collections import Counter
#sys.stdin = open("input.txt", "r")
# cook your dish here
for t in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    a = Counter(a)
    print(n-max(a.values()))
