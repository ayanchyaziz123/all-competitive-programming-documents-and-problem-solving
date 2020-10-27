import sys
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n, x = map(int, input().split())
    if(n == 1 or n == 2 ):
        print(1)
    else:
        floor = 1
        p = x
        app = 2
        while app != n:
            for i in range(0, x):
                app += 1 
                if(app == n): break
            floor += 1 
        print(floor)       






            
    
