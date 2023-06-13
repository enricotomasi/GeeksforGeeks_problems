#User function Template for python3
import math

class Solution:
	def sixyPrime(self, L, R):
		# code here
		primi = []
		
		for i in range (L, R+1):
		    if (i < 3):
		        continue
		    
		    if i % 2 != 0:
    		    primo = True
    		    for j in range(3, int(math.sqrt(i))+1, 2):
    		        if (i % j == 0):
    		            primo = False
    		            break
    		    if primo == True:
    		        primi += [i]
    		
		n = len(primi)

		ans = []
    	
		for i in range(n):
		    for j in range(i+1, n):
		        #print (primi[i], " ", primi[j])
		        if primi[j] - primi[i] == 6:
		            ans += [primi[i]]
		            ans += [primi[j]]
        
        if len(ans) == 0:
            return [-1]

        return ans


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
		ans = ob.sixyPrime(L,R)
		for i in range(len(ans)):
			print(ans[i], end = " ")
		print()

# } Driver Code Ends