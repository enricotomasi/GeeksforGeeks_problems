class Solution:
    def duplicates(self, arr, n): 
    	# code here
    	ans = []
    	m = {}
    	
    	for it in arr:
    	    if it in m:
    	        if m[it] == 0:
    	            ans += [it]
    	            m[it] = 1
    	    else:
    	        m[it] = 0
    	
    	if len(ans) <= 0:
            ans += [-1]
    	
    	ans.sort()
    	
    	return ans


#{ 
 # Driver Code Starts
if(__name__=='__main__'):
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().duplicates(arr, n)
        for i in res:
            print(i,end=" ")
        print()



# } Driver Code Ends