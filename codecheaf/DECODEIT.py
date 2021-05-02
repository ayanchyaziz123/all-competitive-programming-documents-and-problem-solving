for _ in range(int(input())):
    n = int(input())
    st = str(input())
    x = n // 4
    a = 0
    b = 4
    L = []
    for i in range(x):
        sst = st[a:b]
        L.append(sst)
        a += 4
        b += 4
    ans = ""
    for i in range(len(L)):
        if L[i] == "0000":
            ans = ans + "a"
        if L[i] == "0001":
            ans = ans + "b"
        if L[i] == "0010":
            ans = ans + "c"
        if L[i] == "0011":
            ans = ans + "d"
        if L[i] == "0100":
            ans = ans + "e"
        if L[i] == "0101":
            ans = ans + "f"
        if L[i] == "0110":
            ans = ans + "g"
        if L[i] == "0111":
            ans = ans + "h"
        if L[i] == "1000":
            ans = ans + "i"
        if L[i] == "1001":
            ans = ans + "j"
        if L[i] == "1010":
            ans = ans + "k"
        if L[i] == "1011":
            ans = ans + "l"
        if L[i] == "1100":
            ans = ans + "m"
        if L[i] == "1101":
            ans = ans + "n"
        if L[i] == "1110":
            ans = ans + "o"
        if L[i] == "1111":
            ans = ans + "p"
    print(ans)
