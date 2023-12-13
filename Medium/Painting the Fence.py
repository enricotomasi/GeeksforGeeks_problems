#User function Template for python3

class Solution:
    def countWays(self, n, k):
        #code here.
        m = 1000000007
        
        if n == 1:
            return k % m
        
        if n == 2:
            return (k*k) % m
        
        same = k
        diff = k*k
        
        for i in range(3, n+1):
            same, diff = diff, ((same * (k-1)) % m + (diff *(k-1)) % m) % m
        
        return diff
        


#{ 
 # Driver Code Starts

#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    x=list(map(int,input().split()))
    n=x[0]
    k=x[1]
    ob = Solution()
    ans=ob.countWays(n,k)
    print(ans)

# } Driver Code Ends