#User function Template for python3
import math

class Solution:
	def factorsOfFactorial(self, N):
		# code here
        fatt = math.factorial(N)

        primi = [1] * (N + 1)
        
        for i in range(2, int(math.sqrt(N)) + 1):
            if primi[i] == True:
                for j in range(i*i, N + 1, i):
                    primi[j] = False;
        
        ans = 1
        
        for i in range(2, N + 1):
            if primi[i] == True:
                conta = 0
                temp = i
            
                while temp <= N:
                    conta += N // temp
                    temp *= i
            
                ans *= conta + 1
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.factorsOfFactorial(N)
		print(ans)

# } Driver Code Ends