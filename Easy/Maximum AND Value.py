#User function Template for python3
class Solution:

	def maxAND (self, arr, n):
		# Complete the function
		ans = 0;
		arr.sort()
		arr.reverse()
		
		for i in range(1, n):
		    ans = max(ans, arr[i] & arr[i-1])

        return ans
#{ 
 # Driver Code Starts
#Initial Template for Python 3


   
for _ in range(0,int(input())):
    
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    print(ob.maxAND(arr, n))
# } Driver Code Ends