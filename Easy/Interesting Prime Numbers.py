#User function Template for python3
import math

class Solution:
	def CountInterestingPrimeNo(self, N):
		# Code here
		n = 100001
		
		sieve = [True] * n
		sieve[0] = False
		sieve[1] = False
		
		for i in range(int(math.sqrt(n))):
		    if sieve[i] == True:
		        for j in range(i*i, n, i):
		            sieve[j] = False
		
		pot2 = []
		pot = 0
		i = 0
		
		while pot <= N:
		    pot = pow(i, 2)
	        if pot <= N:
    		    pot2 += [pot]
		    i += 1
	    
	    #print(pot2)
	    
	    pot4 = []
	    pot = 0 
	    i = 0
	    
	    while pot <=N:
	        pot = pow(i, 4)
	        if pot <= N:
	            pot4 += [pot]
	        i += 1
	   
	    #print(pot4)
	    
	    ans = 0
	    arrlog = []
	    
	    
	    for i2 in pot2:
	        for i4 in pot4:
	            el = i2 + i4
	            if el > N:
	                break
	            if sieve[el] == True and el not in arrlog:
	                #print(i2, i4, el)
	                arrlog += [el]
	                ans +=1
	   
	    #print("**************************")
	    
	    return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.CountInterestingPrimeNo(N)
		print(ans)
# } Driver Code Ends