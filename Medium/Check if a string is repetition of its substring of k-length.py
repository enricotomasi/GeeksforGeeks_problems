#User function Template for python3
class Solution:
	def kSubstrConcat(self, n, s, k):
		# Your Code Here
		if n % k != 0:
		    return 0
	    
	    st = []
	    nt = 0 
	    
	    while nt < n:
	        st += [s[nt:(nt + k)]]
	        nt += k
	    

	    #print(st)
	    
	    m = dict()
	    
	    for it in st:
	        if it in m:
	            m[it] += 1
	        else:
	            m[it] = 1
	   
	    #print(m)
	    
	    if len(m) > 2:
	        return 0
	        
	    mto = 0
	        
	    for it in m:
	        if m[it] > 1:
	            mto += 1
	   
	    if mto > 1:
	        return 0
	   
	    return 1
	    
	    
	    
	    
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
	t = int (input ())
	for tc in range (t):
		n = int (input ())
		s = input()
		k = int(input())
		ob = Solution()
		print(ob.kSubstrConcat(n,s,k))

# } Driver Code Ends
