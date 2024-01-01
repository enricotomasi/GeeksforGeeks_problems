#User function Template for python3

class Solution:
	def canPair(self, nuns, k):
		# Code here
	    n = len(nums)
	    
	    if n % 2 != 0:
            return False
        
        for i in range(0, n, 2):
            if (nums[i] + nums[i + 1]) % k != 0:
                return False
                
        return True
	    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, k = input().split()
		n = int(n)
		k = int(k)
		nums = list(map(int, input().split()))
		ob = Solution()
		ans = ob.canPair(nums, k)
		if(ans):
			print("True")
		else:
			print("False")
# } Driver Code Ends