#User function Template for python3
class Solution:

	def maxIndexDiff(self, arr, n):
		#code here
		l = [0] * n
		r = [0] * n
		
		l[0] = arr[0]
		
		for i in range(1, n):
		    l[i] = min(arr[i], l[i-1])
	    
	    r[n-1] = arr[n-1]
	    
	    for i in range(n-2, -1, -1):
	        r[i] = max(arr[i], r[i+1])
	    
	    #print(l)
	    #print(r)
	    
	    i = 0
	    j = 0
	    ans = -1
	    
	    while j < n and i < n:
	        if l[i] <= r[j]:
	            ans = max(ans, j-i)
	            j += 1
	        else:
	            i += 1
	    
	    return ans
		
		
		    


#{ 
 # Driver Code Starts
if __name__ == "__main__":
	t = int(input())
	while(t>0):
		num = int(input())
		arr = [int(x) for x in input().strip().split()]
		ob = Solution()
		print(ob.maxIndexDiff(arr,num))
		t-=1
# } Driver Code Ends
