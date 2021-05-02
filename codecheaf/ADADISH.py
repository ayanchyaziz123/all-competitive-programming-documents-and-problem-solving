import sys
sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    N = int(input())
    L = list(map(int, input().split()))
    L.sort()
    if(N==1):
        print(L[0])
    elif(N==2):
        print(L[1])
    else:
        d = min(L)
        half = sum(L) / 2
        dHalf = d / 2
        half = half - dHalf
        half = half + d
        print(int(half))    
    
    
            





        


        

