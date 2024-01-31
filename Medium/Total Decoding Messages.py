#User function Template for python3

class Solution:
	def CountWays(self, str):
		# Code here
		m = 1000000007
		n = len(str)
		
        dp = [-1] * (n + 1)
        
        def rec(pos):
            n = len(str)
            
            if pos == n:
                return 1
            
            if str[pos] == '0':
                return 0
            
            if dp[pos] != -1:
                return dp[pos]
            
            temp = rec(pos + 1) % m
            
            pp = int(str[pos : (pos + 2)])
            
            if pos < n - 1 and pp <= 26:
                temp = (temp + rec(pos + 2)) % m
            
            dp[pos] = temp
            
            return dp[pos] % m
        
        return rec(0)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		str = input()
		ob = Solution()
		ans = ob.CountWays(str)
		print(ans)

# } Driver Code Ends
