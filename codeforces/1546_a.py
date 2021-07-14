for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    brr = list(map(int, input().split()))
    da = db = 0
    ihda = {}
    ihdb = {}
    ind = 0
    for i, j in zip(arr, brr):
        if i > j:
            da += (i-j)
        elif j > i:
            db += (j-i)
        ind += 1
    if da != db:
        print(-1)
        continue
    print(da)
    kda = list(ihda.keys())
    kdb = list(ihdb.keys())
    dka = 0
    dkb = 0
    a = -1
    b = -1
    while da > 0:
        if(dka == 0):
            a += 1
            dka = ihda[kda[a]]
        if (dkb == 0):
            
            b += 1
            dkb = ihdb[kdb[b]]
        print(kda[a]+1, kdb[b]+1)
        dka = 1
        dkb = 1
        da = 1
