#User function Template for python3
class Solution:
	def perfectSum(self, arr, n, sum):
		# code here
		m = 1000000007
		
		dp = [1] + [0] * sum
		
		for it in arr:
		    for i in range(sum, it -1, -1):
		        dp[i] = (dp[i] + dp[i-it]) % m
		
		return dp[sum]
		
		
		
		


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n,sum = input().split()
		n,sum = int(n),int(sum)
		arr = [int(x) for x in input().split()]
		ob = Solution()
		ans = ob.perfectSum(arr,n,sum)
		print(ans)

# } Driver Code Ends