import sys
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    N = int(input())
    L = list(map(int, input().split()))
    L.sort(reverse=True)
    a = 0
    b = 0
    if(N==1):
        print(L[0])
    else:
        for i in range(N):
            if(a <= b):
                a += L[i]
            else:
                b += L[i]                

        print(max(a, b))    