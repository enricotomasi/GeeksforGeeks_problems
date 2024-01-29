#User function Template for python3

from functools import lru_cache

class Solution:
	def TotalCount(self, s):
		# Code here
		@lru_cache(None)
		
		def rec(p, a):
		    if a == n:
		        return 1
		    
		    ans = 0
		    
		    for i in range(a, n):
		        if dp[a][i] >= p:
		            ans += rec(dp[a][i], i + 1)
		    
		    return ans
		    
		n = len(s)
		dp = [[0 for i in range(n)] for j in range(n)]
		
		for i in range(n):
		    for j in range(i, n):
		        if i == j:
		            dp[i][j] = int(s[j])
		        else:
		            dp[i][j] = dp[i][j - 1] + int(s[j])
		
		return rec(0, 0)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		s = input()
		ob = Solution()
		ans = ob.TotalCount(s)
		print(ans)
# } Driver Code Ends
