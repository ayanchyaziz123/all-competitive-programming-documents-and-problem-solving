import sys
sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    x = int(input())
    n = x
    flag = False
    first = 0
    second = 0
    for i in range(0, x):
        if((i & n) + (i | n)) == x:
            flag = True
            first = i
            second = x
            break
        n -= 1    
    if flag == True:
        print(first," ",second)  
    else:
        print(-1)      


