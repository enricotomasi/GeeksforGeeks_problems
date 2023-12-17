#User function Template for python3
class Solution:
	
	def findMaxSum(self, arr, n):
		# code here
		dp = [0] * n
		dp[0] = arr[0]
		
		for i in range(1, n):
		    take = arr[i] + dp[i-2]
		    notake = dp[i-1]
		    dp[i] = max(take, notake)
	    
	    return dp[n-1]

#{ 
 # Driver Code Starts
#Initial Template for Python 3




if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findMaxSum(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends