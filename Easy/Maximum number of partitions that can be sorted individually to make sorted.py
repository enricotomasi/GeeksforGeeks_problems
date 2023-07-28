#User function Template for python3
import sys

def maxPartitions (arr, n) : 
    #Complete the function
    
    # The idea is based on the fact that if an element arr[i] is maximum of prefix arr[0..i], 
    # then we can make a partition ending with arr[i].

    temp = arr[0]
    ans = 0
    
    for i in range(n):
        if temp < arr[i]:
            temp = arr[i]
        if temp == i:
            ans += 1
    
    return ans
            
            
            
            
#{ 
 # Driver Code Starts
#Initial Template for Python 3



for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    ans = maxPartitions(arr, n)
    print(ans)
    





# } Driver Code Ends
