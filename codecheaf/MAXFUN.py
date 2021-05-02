import sys
if __name__=='__main__':
    sys.stdin = open("input.txt", "r")
    for _ in range(int(input())):
        N = int(input())
        L = list(map(int, input().split()))
        L.sort()
        X = []
        lent = len(L) - 1
        X.append(L[0])
        X.append(L[1])
        X.append(L[lent])
        ll = len(X)
        ans = 0
        for i in range(ll):
            if i == ll - 1:
                ans += abs(X[ll-1] - X[0])
            else:
                ans += abs(X[i] - X[i+1])
        print(ans)    

