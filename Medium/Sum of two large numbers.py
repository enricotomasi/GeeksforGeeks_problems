#User function Template for python3
class Solution:
	def findSum(self, X, Y):
		# code here
		
	    nx = len(x) - 1
	    ny = len(y) - 1
	    
	    carry = 0
	    ans = ""
	    
	    while nx >= 0 or ny >= 0:
	        a = 0
	        b = 0
	        
	        if nx >= 0:
	            a = int(X[nx])
	            
	        if ny >= 0:
	            b = int(y[ny])
	        
	        s = a + b + carry
	        carry = 0
	        
	        #print(f"nx: {nx}, ny: {ny}, a: {a}, b: {b}, carry: {carry}, ans: {ans}")
	        
	        if s < 10:
	            ans = str(s) + ans
	        else:
	            ans = str(s % 10) + ans
	            s //= 10
	            carry += s % 10
	        
            nx -= 1
            ny -= 1
        
        if carry != 0:
            ans = str(carry) + ans
        
    
        while len(ans) > 0 and ans[0] == "0":
            ans = ans[1:]
    
        if ans == "":
            return 0
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		x = input()
		y = input()
		ob = Solution()	
		answer = ob.findSum(x,y)
		
		print(answer)


# } Driver Code Ends
