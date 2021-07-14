for _ in range(int(input())):
    a, b = map(int, input().split())
    if a == b:
        print(0, 0)
    elif a == 1:
        print(a, 0)
    else:
        if a > b:
            print(a - b, a//b)
        else:
            print(b-a, b//a)            