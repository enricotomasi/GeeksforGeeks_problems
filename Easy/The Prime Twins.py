#User function Template for python3
import math

def primo(n):
    if n == 1:
        return False
    
    if n %2 == 0:
        return False
    
    for i in range(3, int(math.sqrt(n))+1, 2):
        if n % i == 0:
            return False
    
    return True

class Solution:
	def primeTwins(self, L, R):
		# code here
		primi = []
		
		for i in range(L, R+1):
		    if primo(i):
		        primi += [i]
	    
	    #print(primi)

	    for i in range(len(primi)-1):
	        if primi[i+1] - primi[i] == 2:
	            return [primi[i], primi[i+1]]
        
        
        return [-1]


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		L,R = input().split()
		L=int(L)
		R=int(R)
		ob = Solution();
		ans = ob.primeTwins(L,R)
		for i in range(len(ans)):
			print(ans[i], end = " ")
		print()

# } Driver Code Ends