#User function Template for python3
import sys
class Solution:

	# Function to find maximum
	# product subarray
	def maxProduct(self, arr, n):
		# code here
		
        pre = 1
        su = 1
        ans = sys.maxsize * -1
       
        for i in range(n):
            pre *= arr[i]
            su *= arr[n - 1 - i]
            
            ans = max(ans, max(pre, su))
            
            if pre == 0:
                pre = 1
            
            if su == 0:
                su = 1
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.maxProduct(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends
