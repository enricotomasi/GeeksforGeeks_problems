#User function Template for python3
import math
import sys

def c(a, b):
    c = 0
    
    while a != 0:
        c += a % 10
        a //= 10
    
    if c == b:
        return True
    
    return False
    
class Solution:
	def Root(self, n):
		# Code here
		ok = False
		ans = sys.maxsize
		
		for i in range(90):
		    k = i * i + 4 * n
		    r = int(math.sqrt(k))
		    
		    if r*r == k and c((r-i)/2, i) == True:
		        ok = True
		        ans = min(ans, (r-i) // 2)
	    
	    if (ok):
	        return int(ans)
	       
	    return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		ob = Solution()
		ans = ob.Root(n)
		print(ans)
# } Driver Code Ends