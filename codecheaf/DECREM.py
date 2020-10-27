import sys
#sys.stdin = open("input.txt", "r")
t=int(input())
for i in range(t):
    l,r=map(int,input().split())
    flag=0
    if l==1:
        print(-1)
        continue
    if r-l+1<=l:
        print(r)
    else:
        print(-1)
    