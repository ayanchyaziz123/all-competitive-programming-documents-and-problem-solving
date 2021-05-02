import sys
if __name__ == "__main__":
    #sys.stdin = open("input.txt", "r")
    n = int(input())
    arr = []
    for i in range(1, n+1):
        if n % i==0 and i <= 10:
            arr.append(i)
    print(max(arr))
    

