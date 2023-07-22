
#User function Template for python3

class Solution:
	def SumofDigits(self, A, B):
		# Code here
		ans = 1
		
		while B > 0:
		    if B & 1 > 0:
		        ans = (ans * A) % 9
		    A = (A * A) % 9
		    B = B >>1
	    
	    if ans == 0:
	        return 9
	    
	    return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		A, B = input().split()
		A = int(A)
		B = int(B)
		ob = Solution()
		ans = ob.SumofDigits(A, B)
		print(ans)
# } Driver Code Ends