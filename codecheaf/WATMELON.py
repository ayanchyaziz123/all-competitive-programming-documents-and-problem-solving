import sys
#sys.stdin = open("input.txt", "r")
t = int(input())
for i in range(t):
    r = int(input())
    d = list(map(int,input().split()))
    if sum(d)>=0:
        print("YES")
    else:
        print("NO")