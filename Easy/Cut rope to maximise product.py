#User function Template for python3

class Solution:
    def maxProduct(self, n):
        # code here
        dp = [1]
 
        for i in range(n):
            dp += [0]
        
        for i in range(n+1):
            for j in range(1, n):
                if (i+j <= n):
                    dp[i+j] = max(dp[i+j], dp[i]*j)
        
        #for i in range(n+1):
        #    print (dp[i])
        
        
        return dp[n]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        ob = Solution()
        ans = ob.maxProduct(n)
        print(ans)
        tc -= 1

# } Driver Code Ends