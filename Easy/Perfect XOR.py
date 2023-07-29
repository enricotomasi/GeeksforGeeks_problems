#User function Template for python3

class Solution:
	def total_count(self, n):
		# Code here
		unset = 0
		
		while n > 0:
		    if n %2 == 0:
		        unset +=1
		    
		    n //= 2
	    
	    return pow(2, unset)
		



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		ob = Solution();
		ans = ob.total_count(n)
		print(ans)


# } Driver Code Ends