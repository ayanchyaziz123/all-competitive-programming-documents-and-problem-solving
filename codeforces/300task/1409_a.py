import sys
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    a, b = map(int, input().split())
    c = abs(a-b)
    if c%10 > 0:
        print(c//10+1)
    else:
        print(c//10)