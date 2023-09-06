#User function Template for python3
import math

class Solution:
	def FindGcd(self, N, x, y):
	    # Code here
	    z = math.gcd(x ,y)
	    s = str(N)
	    for i in range(z-1):
	        s += str(N)
	   
	    return s
	    
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N, x, y = input().split()
		N = int(N)
		x = int(x)
		y = int(y)
		ob = Solution()
		ans = ob.FindGcd(N, x, y)
		print(ans)
# } Driver Code Ends