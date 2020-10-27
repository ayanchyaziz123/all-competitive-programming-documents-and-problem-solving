import sys
sys.stdin = open("input.txt", "r")
def powOfTwo(a):
    return a!=0 and ((a & (a - 1)) == 0)
for _ in range(int(input())):
    n = int(input())
    if n == 1:
        print(1)
    elif n == 3:
        print(1,end=" ")
        print(3,end=" ")  
        print(2)
    elif n == 5:
        print(2, end=" ")
        print(3, end=" ")
        print(1, end=" ")
        print(5, end=" ")
        print(4)   
    elif powOfTwo(n):
        print(-1)
    else:
        print(2, end=" ")
        print(3, end=" ")
        print(1, end=" ")
        print(5, end=" ")
        print(4)  
        i = 6
        while i <= n:
            if powOfTwo(i):
                print(i+1, end=" ")
                print(i, end=" ")
                i += 2
            else:
                print(i, end=" ")    
                i += 1
        print()

     