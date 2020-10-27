import sys

#sys.stdin = open("input.txt", "r")

for i in range(int(input())):
    n, k = map(int, input().split())
    print('YES' if k * k <= n and n % 2 == k % 2 else 'NO')