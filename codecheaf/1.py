

# Python3 code to demonstrate  
# pair iteration in list  
# using list comprehension 
from itertools import compress 
  
# initializing list   
test_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16] 
  
# printing original list 
print ("The original list is : " + str(test_list)) 
  
# using list comprehension 
# to perform pair iteration in list  
res = [((i), (i + 1) % len(test_list))  
         for i in range(len(test_list))] 
  
# printing result 
mx = 0
sm = 0
print(res)
for i in res:
    if i[0] ^ i[1] == 10 :
        sm = i[0] * i[1]
        if mx <= sm:
            mx = sm
print(mx)            