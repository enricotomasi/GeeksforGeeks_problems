#User function Template for python3
class Solution:

	def countStrings(self, n):
    	# code here
    	m = 1000000007
    	if n == 1:
    	    return 2
    	elif n == 2:
    	    return 3
    	    
        a = 1
        b = 2
        fibo = 3
        
        for i in range(1, n):
    	    fibo = (a + b) % m
    	    a = b
    	    b = fibo
    	
    	return fibo
    	
    	


#{ 
 # Driver Code Starts
#Initial Template for Python 3



# Driver code 
if __name__ == "__main__": 		
    tc=int(input())
    while tc > 0:
        n=int(input())
        ob = Solution()
        ans = ob.countStrings( n)
        print(ans)
        tc=tc-1
# } Driver Code Ends