#User function Template for python3

class Solution:
	def FindInputType(self, str):
		# Code here
		n = len(str)
		
		digits = False
		letters = False
		dots = 0
		
		for it in str:
		    c = ord(it)
		    
		    if c >= ord("0") and c <= ord("9"):
		        digits = True
		    elif it == ".":
		        dots += 1
		    else:
		        letters = True
		        
	    
	    if dots == 1 and n == 1:
	        return "char"
	    
	    if letters == True:
	        if n == 1:
	            return "char"
	        else:
	            return "string"
	   
	    if dots == 0:
	        return "int"
	   
	    if dots == 1 and str[n-1] != "." and n != 1:
	        return "float"
	    
	    return "string"

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		str = input()
		ob = Solution()
		ans = ob.FindInputType(str)
		print(ans)

# } Driver Code Ends