#User function Template for python3

class Solution:
	def maximize_xor_count(self, n):
		# Code here
		ans = 0
		temp = 0
		
		while n > 0:
		    temp += 1
		    if n & 1 == 0:
		        ans += (1 << temp) // 2
		    
		    n >>= 1
		
	    
	    return ans
	    

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		ob = Solution();
		ans = ob.maximize_xor_count(n)
		print(ans)


# } Driver Code Ends