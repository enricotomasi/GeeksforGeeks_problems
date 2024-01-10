#User function Template for python3
import sys

class Solution:
	def minCoins(self, coins, n, v):
		# code here
		dp = [v + 1] * (v + 1)
        
        dp[0] = 0
        for i in range(1, v + 1):
            for it in coins:
                if i - it >= 0:
                    dp[i] = min(dp[i], 1 + dp[i - it])
        
        if dp[-1] != v + 1:
            return dp[-1]
        
        return -1
        
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		v,m = input().split()
		v,m = int(v), int(m)
		coins = [int(x) for x in input().split()]
		ob = Solution()
		ans = ob.minCoins(coins,m,v)
		print(ans)

# } Driver Code Ends
