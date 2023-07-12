#User function Template for python3
import math

class Solution:
	def isSphenicNo(self, N):
		# Code here
	    sieve = [1] * 1001
		
		for i in range(2, int(math.sqrt(N)+1)):
		    if sieve[i] == 1:
		        for j in range(i*i, N+1, i):
		            sieve[j] = 0
		 
		primi = []
		 
		for i in range(2, 1001):
		     if sieve[i] == 1:
		         primi += [i]
		 
		#print(primi)

        for i in range(len(primi)):
            for j in range(len(primi)):
                if i == j:
                    continue
                if primi[i] * primi[j] > N:
                    break
                for k in range(len(primi)):
                    if i == k or j == k:
                        continue
                    if primi[i] * primi[j] * primi[k] == N:
                        return 1
                    if primi[i] + primi[j] * primi[k] > N:
                        break;
        
        return 0


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.isSphenicNo(N)
		print(ans)
# } Driver Code Ends