


class Solution:
    
    #Function to find the minimum number of swaps required to sort the array.
	def minSwaps(self, nums):
		#Code here
		n = len(nums) 
		
		m = [*enumerate(nums)]
	    m.sort(key = lambda it: it[1]) 
	    
	    vis = {k: False for k in range(n)} 
	    
	    #print(m)
	    
	    ans = 0
        
        for i in range(n):
            if vis[i] or m[i][0] == i: 
                continue
            
            s = 0
            j = i
            
            while not vis[j]:
                vis[j] = True
  
                j = m[j][0]
                s += 1
            
            if s > 0:
                ans += s - 1
        
        return ans
#{ 
 # Driver Code Starts


if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		nums = list(map(int, input().split()))
		obj = Solution()
		ans = obj.minSwaps(nums)
		print(ans)

# } Driver Code Ends