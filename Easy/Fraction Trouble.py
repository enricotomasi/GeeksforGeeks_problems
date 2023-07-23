#User function Template for python3
import math

class Solution:
	def LargestFraction(self, n, d):
		# Code here
		numeratore = 0
		denominatore = 1
		
		div = 0
		
		m = 10000
		
		while m >= 2:
		    p = (n * m - 1) // d
		    if p * denominatore >= m * numeratore:
		        numeratore = p
		        denominatore = m
		    m -= 1
		    
	    div = math.gcd(numeratore, denominatore)
	    
	    return numeratore // div, denominatore // div


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, d = input().split()
		n = int(n); d = int(d);
		ob = Solution()
		ans = ob.LargestFraction(n, d)
		for _ in ans:
			print(_, end = " ")
		print()
# } Driver Code Ends