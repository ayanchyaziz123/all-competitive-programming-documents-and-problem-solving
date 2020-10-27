import sys
sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n = int(input())
    L = [1]
    move = 0
    if(sum(L) == n):
        print(move)
    else:
        for i in range(len(L)):
                