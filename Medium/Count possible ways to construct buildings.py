#User function Template for python3

class Solution:
	def TotalWays(self, n):
		# Code here
		m = 1000000007
		
		if n == 1:
		    return 4
	    elif n == 2:
	        return 9
	    
	    a = 1
	    b = 2
	    fibo = 0
	    
	    for i in range(n-1):
	        fibo = (a + b) % m
	        a = b % m
	        b = fibo 
	   
	    #print(f"Fibo: {fibo}")
	    
	    ans = (fibo * fibo) % m

	    return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.TotalWays(N)
		print(ans)
# } Driver Code Ends
