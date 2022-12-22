#User function Template for python3

class Solution:
    def roundToNearest (self, N) : 
        #Complete the function
        n = int(N)
        r = int(n%10)
        
        ans = n-r;
        
        if r>5: ans += 10;
        
        return ans;
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    s = input()
    ob = Solution()
    res = ob.roundToNearest(s)
    print(res)


# } Driver Code Ends