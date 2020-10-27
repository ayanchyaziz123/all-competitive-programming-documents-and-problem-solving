import sys
sys.stdin = open("input.txt", "r")

def findIndex(L, N, X, p):
    min = 100000000
    minp = 0
    for i in range(N):
        if L[i] == X:
            if abs(p -i) < min:
                min = abs(p-i)
                minp = i
    return minp



def subMain():
    for _ in range(int(input())):
        N, X, p, k = map(int, input().split())
        L = list(map(int, input().split()))
        L.sort()
        index = findIndex(L, N, X, p) 
        count = 0
        if L[index] != X:
           L[k - 1] = X
           L.sort()
           count += 1

        if L[p -1] == X:
           print(0 + count)
           return
        if (p < k) and (L[p-1] < X):
           print(-1)
           return
        if (p > k) and (L[p-1] > X):
            print(-1)
            return   
        ind = findIndex(L, N, X, p) + 1
        print(abs(p-ind) + count)   

if __name__ == "__main__":
    subMain()
