for _ in range(int(input())):
    lrr, brr = [int(i) for i in input().split(' ')]
    flag = ''
    for i in range(brr):
        flag += '10'[i % 2]
    mid = '1' + '0' * (brr-2) + '1'
    mid2 = '0' * brr
    solution = ['' for i in range(lrr)]
    l = 0
    h = lrr - 1
    while l <= h:
        if(l == 0):
            solution[l] = flag
            solution[h] = flag
        elif l+1 == h and l % 2 == 0:
            solution[l] = mid
            solution[h] = mid2
        elif l % 2 == 1:
            solution[l] = mid2
            solution[h] = mid2
        else:
            solution[l] = mid
            solution[h] = mid
        l += 1
        h -= 1

    for ans in solution:
        print(ans)
