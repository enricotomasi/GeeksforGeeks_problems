#User function Template for python3

class Solution:

    def longestPalinSubseq(self, S):
        # code here
        n = len(S)
        sr = S[: : -1]
        
        dp = [[0 for i in range(n + 1)] for j in range(n + 1)]
        
        for i in range(1, n + 1):
            for j in range(1, n + 1):
                if S[i - 1] == sr[j - 1]:
                    dp[i][j] = dp[i - 1][j - 1] + 1
                else:
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
        
        return dp[n][n]
        
            
            
            

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        ob = Solution()
        ans = ob.longestPalinSubseq(s)
        print(ans)
# } Driver Code Ends
