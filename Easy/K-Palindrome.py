#User function Template for python3

class Solution:
    def kPalindrome(self, str, n, k):
        # code here
        dp = [[0] * n for i in range(n)]
        
        for i in range(n - 1, -1, -1):
            
            dp[i][i] = 1
            
            for j in range(i + 1, n):
                if str[i] == str[j]:
                    dp[i][j] = dp[i + 1][j - 1] + 2
                else:
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1])

        if (n - dp[0][n-1]) <= k:
            return 1
            
        return 0
        
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        arr = input().split()
        n = int(arr[0])
        k = int(arr[1])
        str = input()

        ob = Solution()
        print(ob.kPalindrome(str, n, k))

# } Driver Code Ends
