import sys
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n = int(input())
    L = list(map(int, input().split()))
    ans = sum(L) % 2
    if(ans == 1):
        print("YES")
    else:
        print("NO")    