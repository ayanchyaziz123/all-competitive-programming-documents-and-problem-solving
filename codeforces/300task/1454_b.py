import sys
import collections
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n = int(input())
    L = list(map(int, input().split()))
    freq = collections.Counter(L)
    flag = False
    K = []
    for (key, value) in freq.items():
        if(value < 2):
            flag = True
            K.append(key)
    if(flag == False):
        print(-1)
    else:
        m = min(K)
        for i in range(len(L)):
            if(m == L[i]):
                print(i+1)

