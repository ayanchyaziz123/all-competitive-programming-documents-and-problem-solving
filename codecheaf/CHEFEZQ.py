import sys
sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n, k = map(int, input().split())
    L = list(map(int, input().split()))
    s = sum(L)
    print(s//k + 1)
        

        






    