#User function Template for python3

class Solution:
	def MinimumChocolate(self, nums):
		# Code here
		n = len(nums)
		
		taken = nums[0]
		takeIndex = 0
		
		
		for i in range(1, n):
		    el = nums[i]
		    
		    if el > taken and taken < n - i:
		        taken = el
		        takeIndex = i
		        
		    #print(el, taken)

	    #print(n - taken)
	    
	    ans = takeIndex
	    
	    if n - takeIndex - taken > 0:
	        ans += n - takeIndex - taken
	    
	    return ans 
		        
		
		
		


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		nums = list(map(int,input().split()))
		ob = Solution()
		ans = ob.MinimumChocolate(nums)
		print(ans)
# } Driver Code Ends