import sys

sys.stdin = open("input.txt", "r")

for i in range(int(input())):
    n = int(input())
    c = 0
    for i in range(n):
        a,b = map(int, input().split())

    for k in range(1, n+1):
        c^=k
    
    print(c)

