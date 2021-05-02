import sys
sys.stdin = open("input.txt", "r")


def SieveOfEratosthenes(n, L, N):

    Pl = []
    prime = [True for i in range(n + 1)]
    p = 2
    while (p * p <= n):

        if (prime[p] == True):
            for i in range(p * 2, n + 1, p):
                prime[i] = False
        p += 1
    prime[0] = False
    prime[1] = False
    for p in range(n + 1):
        if prime[p]:
            Pl.append(p)
    Z = []
    for i in range(N):
        x = Pl[i]
        Z.append(x)
    Ans = []
    for i in range(N):
        if(L[i] != (i+1)):
            m = max(Z)
            Ans.append(m)
        else:
            y = Z[i]
            Ans.append(y)
    for i in range(N):
        print(Ans[i], end=" ")
    print()    


if __name__ == '__main__':
    for _ in range(int(input())):
        N = int(input())
        L = list(map(int, input().split()))
        SieveOfEratosthenes(100000, L, N)
