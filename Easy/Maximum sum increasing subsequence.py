#User function Template for python3
class Solution:
	def maxSumIS(self, arr, n):
		# code here
		m = 0
		dp = [0] * n
		
		for i in range(n):
		    dp[i] = arr[i]
		    
	    for i in range(1, n):
	        for j in range(i):
	            if arr[i] > arr[j] and dp[i] < dp[j] + arr[i]:
	                dp[i] = dp[j] + arr[i]
	   
	    ans = -1
	   
	    for it in dp:
	        ans = max(ans, it)
	   
	    return ans
	       
	   
	   
	    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		Arr = [int(x) for x in input().split()]
		ob = Solution()
		ans = ob.maxSumIS(Arr,n)
		print(ans)

# } Driver Code Ends