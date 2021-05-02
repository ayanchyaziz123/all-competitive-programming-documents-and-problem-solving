import sys

N = 1000000
sieve = []
dic = [None] * (N + 1)

def solve():
    sieve = [True] * (1 * (N+1))
    sieve[0] = False
    sieve[1] = True
    for i in range(2, N):
        if  sieve[i] == True:
            j = i * i
            while(j < N+1):
                sieve[j] = False
                j += i

def solve2():
    temp = 0
    for i in range(2, N+1):
        if(sieve[i] == True):
            temp =+ 1
        dic[i] = temp    
        

if __name__ == "__main__":
    sys.stdin  = open("input.txt", "r")
    for _ in range(int(input())):
        n, k = map(int , input().split())
        solve()
        solve2()
        if dic[n] > k:
            print("Divyam")
        else:
            print("Chef")    

        