import sys

a = []
b = []
arr = []


def binaryToDecimal(n): 
    return int(n,2) 

def work():
    x = 0
    for i in arr:
        if x == 0 and i == 1:
            a.append(str(1))
            b.append(str(0))
        elif i == 1:
            a.append(str(0))
            b.append(str(1))
        elif i == 0:
            a.append(str(1))
            b.append(str(1)) 
        x += 1          


def decimalToBinary(n):  
    
  
    if(n > 1):   
        decimalToBinary(n//2)  
    
    x = n % 2
    arr.append(x)
      
if __name__ == "__main__":
    #sys.stdin = open("input.txt", "r")
    for _ in range(int(input())):
        a = []
        b = []
        c = int(input())
        t = 0
        d = 0
        while True:
            if c < d:
                break
            else:
                t = t + 1
                d  = 2 ** t
        arr = []      
        decimalToBinary(c)  
        work()
        str1 = ""
        str2 = ""
        for ele in a:
            str1 += ele
        for ele in b:
            str2 += ele 
        A = binaryToDecimal(str1) 
        B = binaryToDecimal(str2) 
        print(A*B)    


