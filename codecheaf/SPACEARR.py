import sys

if __name__ == "__main__":
    #sys.stdin = open("input.txt", "r")
    for _ in range(int(input())):
        n = int(input())
        L = list(map(int, input().split()))

        L.sort()
        val = 0
        flag = 0
        for i in range(n):
            if (i + 1 - L[i]) < 0:
                flag = 1
                break
            val = val + (i + 1 - L[i]) 
        if flag == 1:
            print("Second")    
        else:
            if val % 2 == 1:
                print("First") 
            else:
                print("Second")       


# Extra test cases
#Subscribe to my channel
#I will make a video by using pseudocode later.