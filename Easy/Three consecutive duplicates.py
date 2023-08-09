#User function Template for python3
class Solution:
	def remove3ConsecutiveDuplicates(self, S):
		# code here
	
		
		while True:
		    toremove = []
		    n = len(S)
    		last1 = "@"
		    last2 = "#"
		    
    		for i in range(n):
    		    curr = S[i]
    		    if last1 == last2 and last2 == curr:
    		        toremove += [i]
    		        last1 = "@"
		            last2 = "#"
    		    else:
    		        last2 = last1
    		        last1 = curr
    	    
    	    if len(toremove) == 0:
    	        break
    	    
    	    #print(toremove)
    	    
    	    nuova = ""
    	    cur = 0
    	    for it in toremove:
    	        nuova += S[cur:it-2]
    	        #print(nuova)
    	        cur = it+1
    	    
    	    #print(cur)
    	    if cur < n:
    	        nuova += S[cur:]
    	    
    	    S = nuova
    	    #print(S)
    	    
        
        if S == "":
            return "-1"
        
        return S

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		S = input()
		ob = Solution()	
		answer = ob.remove3ConsecutiveDuplicates(S)
		
		print(answer)


# } Driver Code Ends