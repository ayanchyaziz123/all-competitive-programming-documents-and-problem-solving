for i in range(int(input())):
    D, d, p, q = map(int, input().split())
    vi = D // d
    if vi%2==0:
        s = d*vi//2*(2*p+(vi-1)*q)
        s+=(D%d)*(p+vi*q)
        print(s)
    else:
        s = d*(vi*(p+(vi-1)//2)*q)
        s+=(D%d)*(p+vi*q)
        print(s)    