#User function Template for python3
import math

class Solution:
	def minimumPseudoBinary(self, N):
		# code here
		ans = []

		while N > 0:
            temp = N
		    sub = ""
		   
            while temp > 0:
    		    digit = temp % 10
    		    temp //= 10
    		       
    		    if digit == 0:
    		        sub = "0" + sub
                else:
    		        sub = "1" + sub
    		    
		    si = int(sub)
		    ans += [si]
    		    
    	    N -= si
    		    
		           
	    return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.minimumPseudoBinary(N)
		for num in ans:
		    print(num,end=' ')
		print()
# } Driver Code Ends