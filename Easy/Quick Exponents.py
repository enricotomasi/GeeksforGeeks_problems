#User function Template for python3

class Solution:
    def quickExponents(self, a, b):
    	#code here 
    	ans = a % 10
    	temp = (b-1) % 4
    	
    	for i in range(temp):
    	    ans = (ans * a) % 10
    	
    	return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        a, b = [int(x) for x in input().split()] 
        ob = Solution()
        ans = ob.quickExponents(a,b)
        print(ans)
# } Driver Code Ends