#User function Template for python3
import math

class Solution:
	def LeftMostDigit(self, nums):
		# Code here
	    n = len(nums)
	    
	    temp = 0
	    for i in range(n):
	        temp += math.log10(nums[i])
	        
	    rem = temp - math.floor(temp);
	    
	    return math.trunc(pow(10, rem))

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		nums =  list(map(int,input().split()))
		ob = Solution()
		ans = ob.LeftMostDigit(nums)
		print(ans)
# } Driver Code Ends