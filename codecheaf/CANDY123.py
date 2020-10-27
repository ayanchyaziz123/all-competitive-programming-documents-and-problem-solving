import sys
sys.stdin = open("input.txt", "r")
T=int(input())
for i in range(T):
     a,b=map(int, input().split())
     i=1
     while True:
          if a>=i:
               a-=i
               i+=1
          else:
               print("Bob")
               break
          if b>=i:
               b-=i
               i+=1
          else:
               print("Limak")
               break

    
      