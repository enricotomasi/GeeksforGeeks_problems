from itertools import permutations
class Solution:
    # Your task is to complete this function
    # Function should return an integer
    def countPS(self, string):
        # Code here
        m = 1000000007
        n = len(string)
        
        
        dp = [1 for _ in range(n)]
        
        for i in range(1, n):
            temp = 0
            for j in range(i - 1, -1, -1):
                x = dp[j]
                if string[i] == string[j]:
                    dp[j] = dp[j] + temp + 1
                
                temp += x % m
        
        ans = 0
        
        #print(dp)
        
        for i in range(n):
            ans += dp[i]
            ans %= m
        
        return ans
                



#{ 
 # Driver Code Starts
#Initial template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        ob=Solution()
        print(ob.countPS(input().strip()))

# } Driver Code Ends