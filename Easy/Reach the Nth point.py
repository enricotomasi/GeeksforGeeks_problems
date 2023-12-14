#User function Template for python3

class Solution:
	def nthPoint(self, n):
		# Code here
		m = 1000000007
		
		if n <= 2:
		    return n
		    
        a = 1
        b = 1
        fibo = 2
        
        for i in range(1, n):
            fibo = (a + b) % m
            a = b
            b = fibo
        
        return fibo
		


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		ob = Solution();
		ans = ob.nthPoint(n)
		print(ans)
# } Driver Code Ends