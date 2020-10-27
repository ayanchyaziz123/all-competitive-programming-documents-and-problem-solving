import sys
sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n = int(input())
    L = [2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1]
    count = 0 
    while n > 0:
        for i in L:
            if(n >= i):
                count = count + n // i
                n = n % i
    print(count)