import sys
#sys.stdin = open("input.txt", "r")


def fun(a, b, x, y, n):
    t = min(n, a-x)
    a = a - t
    n = n - t
    t = min(n, b - y)
    b = b - t
    return a*b


if __name__ == "__main__":
    for _ in range(int(input())):
        a, b, x, y, n = map(int, input().split())
        a1 = fun(a, b, x, y, n)
        a2 = fun(b, a, y, x, n)
        print(min(a1, a2))
    
