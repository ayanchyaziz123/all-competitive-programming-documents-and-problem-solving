import sys
sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n = int(input())
    L = list(map(int, input().split()))
    no = False
    for i in range(0, n):
        if (i +1 ) % L[i] == 0:
            continue
        else:
            no = True
            break
    if(not no):
        print("YES")
    else:
        print("NO")        