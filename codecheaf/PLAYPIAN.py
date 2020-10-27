import sys
sys.stdin = open("input.txt", "r")
for _ in range(int(input())):
    str_ = str(input())
    a = 0
    b = 0
    flag = False
    for i in range(len(str_)):
        if a == 2 or b == 2:
            print("NO")
            flag = True
            break
        else:
            if str_[i] == 'A':
                a += 1
                b -= 1
            if str_[i] == 'B':
                b += 1
                a -= 1    
    if flag == False:
        print("YES")
