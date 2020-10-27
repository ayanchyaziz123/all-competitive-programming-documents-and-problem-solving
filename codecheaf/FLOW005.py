import sys
#sys.stdin = open("input.txt", "r")
t = int(input())
for a in range(t):
    n = int(input())
    L = [100,50,10,5,2,1]
    while n>0:
        count = 0
        for i in L:
            count = count + n//i
            n = n%i
    print(count)

