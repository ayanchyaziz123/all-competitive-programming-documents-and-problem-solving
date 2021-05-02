import sys
#sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    n, m = map(int, input().split())
    stack = []
    se = {}
    se = set()
    se.add(0)
    stack.append(0)
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    while len(stack) > 0:
        x = stack.pop()
        for i in range(0, n):
            y = a[i]
            tt = x | y
            if not tt in se:
                se.add(x | y)
                stack.append(x | y)
        for i in range(0, m):
            y = b[i]
            ttt = x & y
            if not ttt in se:
                se.add(x & y)
                stack.append(x & y)
    print(len(se) + 1)
