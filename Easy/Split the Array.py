#User function Template for python3
class Solution:
	def countgroup(self, a, n): 
		#Complete the function
		m = 1000000007
		x = 0
		
		for i in range(n):
		    x ^= a[i]
		
		ans = 1
		for i in range(n-1):
		    ans = (ans * 2) % m
		
		if x == 0:
		    return ans - 1
		
		return 0



#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    print(ob.countgroup(arr, n))





# } Driver Code Ends