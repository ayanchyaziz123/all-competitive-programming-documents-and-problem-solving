# cook your dish here
p=int(input())
for i in range(p):
  o=0
  n=int(input())
  list1=list(map(int,input().split()))
  
  for j in range(n):
    if (j+1)%list1[j]!=0:
      if list1[j]!=j+1:
        print("NO")
        o=1
        break
  if o==0:
      print("YES") 