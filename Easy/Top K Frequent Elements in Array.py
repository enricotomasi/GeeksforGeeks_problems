
class Solution:
	def topK(self, nums, k):
		#Code here
        m = {} 
        
        for it in nums:
            if it in m:
                m[it] += 1
            else:
                m[it] = 1
        
        m = sorted(m.items(), key = lambda x: (x[1], x[0]), reverse = True) 
        
        ans = []
        
        for it1, it2 in m:
            if k <= 0:
                break
            
            ans.append(it1)
            k -= 1
            
        return ans
#{ 
 # Driver Code Starts
		
if __name__ == '__main__':
    T=int(input())
    for i in range(T):
    	a = list(map(int, input().strip().split()))
    	n = a[0]
    	nums = a[1:]
    	k = int(input().strip())
    	obj = Solution()
    	ans = obj.topK(nums, k)
    	for i in ans:
    		print(i, end = " ")
    	print()
    	
# } Driver Code Ends