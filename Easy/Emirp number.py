#User function Template for python3
def reverse(n):
    s = str(n)
    s = s[::-1]
    
    ans = int(s)
    
    #print(n, ans)
    
    if ans == n:
        return -1
    
    return ans

import math

class Solution:
	def EmirpNumbers(self, N):
		# Code here
		n = 100001
		
		sieve = [True] * n
		
		for i in range(2, int(math.sqrt(n))):
		    if sieve[i] == True:
		        for j in range(i*i, n, i):
		            sieve[j] = False

		ans = []
		
		for i in range(13, N+1):
		    if sieve[i] == True:
		        rev = reverse(i)
		        #print(i, rev)
		        if sieve[rev] == True and rev <= N:
		            ans += [i]
		
		return ans
		        
		    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.EmirpNumbers(N)
		for _ in ans:
			print(_, end = " ")
		print()

# } Driver Code Ends