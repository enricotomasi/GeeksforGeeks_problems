#User function Template for python3

class Solution:
    def telephoneNum(self, n):
        # code here
        if n <= 1:
            return 1
        
        if n == 2:
            return 2
            
            
        m =  1000000007
        
        dp = [0] * (n+1)
        dp[1] = 1
        dp[2] = 2
        
            
        for i in range(3, n+1):
            dp[i] = (dp[i-2] * (i-1) + dp[i-1]) % m
        
        return dp[n]
            
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        
        ob = Solution()
        print(ob.telephoneNum(n))
# } Driver Code Ends