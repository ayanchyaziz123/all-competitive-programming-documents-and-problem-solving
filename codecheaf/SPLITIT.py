import sys
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    l=int(input())
    s=input()
    if s.count(s[-1])>1:
        print("YES")
    else:
        print("NO")
               