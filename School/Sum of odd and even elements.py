 
#User function Template for python3
import math

class Solution:
	def find_sum(self, n):
		# Code here
	
	    somma = (n*(n+1))/2
		pari = somma/2
		dispari = somma/2

	    if n%2 == 0:
	        pari += n/4
	        dispari -= n/4
	    else:
	        pari -= n/4 + 0.25
	        dispari += n/4 + 0.25
		        
		ans = [math.trunc(dispari), math.trunc(pari)]
		return ans

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		ob = Solution();
		ans = ob.find_sum(n)
		for _ in ans:
			print(_, end=" ")
		print()
# } Driver Code Ends