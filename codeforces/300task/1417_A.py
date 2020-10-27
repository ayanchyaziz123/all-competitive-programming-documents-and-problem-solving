import sys
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n, k = map(int, input().split())
    L = list(map(int, input().split()))
    count = 0
    for i in range(0, n):
        for j in range(0, n):
            if (i+1) != L[j] and ((i+1) + L[j]) < k:
                count += 1

    print(count)