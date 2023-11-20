#User function Template for python3
import collections

class Solution:
    #Function to return max value that can be put in knapsack of capacity W.
    def knapSack(self, W, wt, val, n):
        # code here
        dp = [[0 for i in range(W + 1)] for j in range(n)]
        
        for i in range(n):
            v = val[i]
            w = wt[i]
            
            #print("v, w:", v, w)
            
            for j in range(W+1):
                
                v1 = dp[i][j] = dp[i-1][j]
                if w > j:
                    dp[i][j] = v1
                else:
                    v2 = v
                    if j - w >= 0 and i > 0:
                        v2 += dp[i-1][j - w]
                    
                    #print("v1, v2: ", v1, v2)
                    
                    dp[i][j] = max(v1, v2)
                    
        #print(dp)
        
        return dp[n-1][W]

#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

# Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        n = int(input())
        W = int(input())
        val = list(map(int,input().strip().split()))
        wt = list(map(int,input().strip().split()))
        ob=Solution()
        print(ob.knapSack(W,wt,val,n))
# } Driver Code Ends