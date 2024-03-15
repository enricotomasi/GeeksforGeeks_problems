#User function Template for python3

class Solution:

	def findSubarray(self, a, n):
    	# code here
	    arr = []
    	t = 0
	    
	    while t < n:
    	    temp = []
    	    for i in range(t, n):
    	        if a[i] >= 0:
    	            temp.append(a[i])
    	            t += 1
    	        else:
    	            t += 1
    	            break
    	    
    	    if len(temp) > 0:
    	        arr.append(temp)
        
        if len(arr) < 1:
            return [-1]
        
        else:
            temp2 = []
            
            for i in arr:
                temp2.append(sum(i))
                
            if temp2.count(max(temp2)) > 1:
                return max(arr, key = len)
            else:
                return max(arr, key = sum)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

	tc=int(input())
	while tc > 0:
	    n=int(input())
	    a=list(map(int, input().strip().split()))
	    ob = Solution()
	    ans=ob.findSubarray(a, n)
	    for x in ans:
	        print(x, end=" ")
	    print()
	    tc=tc-1
# } Driver Code Ends
