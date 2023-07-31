#User function Template for python3

class Solution:
	def MinimumTransaction(self, nums):
		# Code here
		n = len(nums)
		tot = 0
		
		for it in nums:
		    tot += it
		
		if tot % n != 0:
		    return -1
		    
		media = tot // n
        pos = 0
        neg = 0
		
		for it in nums:
		    if it == media:
		        continue
		    
		    diff = abs(media - it)
		    if diff % 3 != 0:
		        return -1
		    
		    if media > it:
		        neg += diff // 3
		    else:
		        pos += diff // 3
		 
		if pos != neg:
		    return -1
		 
		return pos
		


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		nums = list(map(int,input().split()))
		ob = Solution()
		ans = ob.MinimumTransaction(nums)
		print(ans)
# } Driver Code Ends