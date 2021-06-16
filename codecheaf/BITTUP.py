for i in range(int(input())):
     m, n = map(int,input().split())
     o = pow(2,m,1000000007)
     o = o - 1
     print(pow(o,n,1000000007))