t = int(input())
while(t > 0):
    t -= 1
    a = int(input())
    b = [int(x) for x in input().split()]
    if 0 in b:
        print(len(set(b)) - 1)
    else:
        print(len(set(b)))
