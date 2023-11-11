#User function Template for python3
class Solution:
	def minJumps(self, arr, n):
	    #code here
	    if n <= 1:
	        return 0
	    
	    if arr[0] == 0:
	        return -1
	    
	    ans = 1
	    maxreach = arr[0]
	    steps = arr[0]
	    
	    for i in range(1, n+1):
	        if i == n - 1:
	            return ans
	        
	        maxreach = max(maxreach, arr[i] + i)
	        steps -= 1
	        
	        if steps == 0:
	            ans += 1
	            if i >= maxreach:
	                return -1
	            steps = maxreach - i
	  

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		Arr = [int(x) for x in input().split()]
		ob = Solution()
		ans = ob.minJumps(Arr,n)
		print(ans)
# } Driver Code Ends