#User function Template for python3
import math

class Solution:
	def AllMersennePrimeNo(self, n):
		# Code here
		sieve = [True] * (n+1)
		
		for i in range(2, int(math.sqrt(n)+1)):
		    if sieve[i] == True:
		        for j in range(i*i, n+1, i):
		            sieve[j] = False;
		
		pot = 4
		ans = []
		
		#print(sieve)
		
		while (pot <= n+1):
		    el = pot - 1
		    #print(el)
		    if (sieve[el]) == True:
		        ans += [el]
		    
		    pot *= 2
		    #print(pot)
	    
	    
	    #print("--------------------------------------------------")
	    
	    return ans
		        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		ob = Solution()
		ans = ob.AllMersennePrimeNo(n)
		for i in ans:
			print(i, end = " ")
		print()
# } Driver Code Ends