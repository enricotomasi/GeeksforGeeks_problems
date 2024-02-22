# Your task is to complete this function
# Finction should return Integer
class Solution:
    def sequenceCount(self, s, t):
        # Code here
        
        def rec(a, b):
            if b >= len(t):
                return 1
            
            if a >= len(s):
                return 0
                
            if dp[a][b] != -1:
                return dp[a][b] % m
            
            temp = rec(a + 1, b)
            temp2 = 0

            if s[a] == t[b]:
                temp2 = rec(a + 1, b + 1)
                
            dp[a][b] = (temp2 + temp) % m
            
            return dp[a][b] % m
        
        m = 1000000007
        
        nt = len(t)
        ns = len(s)
        
        dp = [[-1 for i in range(nt)] for j in range(ns)]
        
        return rec(0, 0)
        
#{ 
 # Driver Code Starts
#Initial template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        arr = input().strip().split()
        print(Solution().sequenceCount(str(arr[0]), str(arr[1])))
# } Driver Code Ends
