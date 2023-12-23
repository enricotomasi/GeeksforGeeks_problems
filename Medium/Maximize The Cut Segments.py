#User function Template for python3
import sys

class Solution:
    
    #Function to find the maximum number of cuts.
    def maximizeTheCuts(self, n, x, y, z):
        #code here
        dp=[0] * (n+1)
        
        for i in range(1, n+1):
            ans1 = -1
            ans2 = -1
            ans3 = -1
            
            if i >= x:
                ans1 = dp[i-x]
            
            if i >= y:
                ans2 = dp[i-y]
            
            if i >= z:
                ans3 = dp[i-z]
            
            ans = max(ans1, max(ans2, ans3))
            
            dp[i] = ans
            
            if ans != -1:
                dp[i] += 1
        
        if dp[n] == -1:
            return 0
        
        return dp[n]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    t=int(input())
    for tcs in range(t):
        n=int(input())
        x,y,z=[int(x) for x in input().split()]
        
        print(Solution().maximizeTheCuts(n,x,y,z))
# } Driver Code Ends
