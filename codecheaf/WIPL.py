import sys
sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    N, K = map(int, input().split())
    arr = list(map(int, input().split()))
    sum = 0
    arr.sort()
    arr2 = []
    arr2.append(arr[N-1])
    sum = arr[N-1]
    z = -1
    for i in range(N-2, 0):
        sum = sum + arr[i]
                        




