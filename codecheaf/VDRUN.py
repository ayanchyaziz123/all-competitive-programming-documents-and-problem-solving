import sys
sys.stdin = open("input.txt", "r")
#if i get 200 subscribers I will give you full code
for _ in range(int(input())):
    N, K, X, Y = map(int, input().split())
    yes = False
    for i in range(N):
        X = (X + K) % N
        if(X == Y):
            yes = True
            break

    if(yes == True):
        print("YES")
    else:
        print("NO")    

