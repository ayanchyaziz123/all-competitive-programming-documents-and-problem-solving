import sys
sys.stdin = open("input.txt", "r")
# Python3 program for the above approach
 
# Function to count all the possible
# squares with given lines parallel
# to both the X and Y axis
def numberOfSquares(X, Y, N, M):
 
    # Stores the count of all possible
    # distances in X[] & Y[] respectively
    m1 = {}
    m2 = {}
    ans = 0
 
    # Find distance between all
    # pairs in the array X[]
    for i in range(0, N):
        for j in range(i + 1, N):
            dist = abs(X[i] - X[j])
 
            # Add the count to m1
            if dist in m1:
                m1[dist] = m1[dist] + 1
            else:
                m1[dist] = 1
 
    # Find distance between all
    # pairs in the array Y[]
    for i in range(0, M):
        for j in range(i + 1, M):
            dist = abs(Y[i] - Y[j])
 
            # Add the count to m2
            if dist in m2:
                m2[dist] = m2[dist] + 1
            else:
                m2[dist] = 1
 
    # Find sum of m1[i] * m2[i]
    # for same distance
    for key in m1:
         
        # Find current count in m2
        if key in m2:
             
            # Add to the total count
            ans = ans + (m1[key] * m2[key])
 
    # Return the final count
    return ans
 
# Driver Code
if __name__ == "__main__":
     
    # Given lines
    W, H, N, M = map(int, input().split())
    L1 = list(map(int, input().split()))
    L2 = list(map(int, input().split()))
    # Function call
    print(numberOfSquares(L1, L2, N, M))
 
# This code is contributed by akhilsaini

