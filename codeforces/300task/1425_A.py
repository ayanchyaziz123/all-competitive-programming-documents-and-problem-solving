import sys
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n = int(input())
    if(n % 2== 0):
        print((n//2)+1)
    else:
        print((n//2)+(n%2))    