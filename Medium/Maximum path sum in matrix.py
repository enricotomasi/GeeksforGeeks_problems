#User function Template for python3

class Solution:
    def maximumPath(self, N, Matrix):
        # code here
        dp = [[0 for i in range(N)] for j in range(N)]
        
        for i in range(N):
            for j in range(N):
                a = 0
                b = 0
                c = 0
                
                if i > 0 and j > 0:
                    a = dp[i-1][j-1]
                
                if i > 0:
                    b = dp[i-1][j]
                
                if i > 0 and j < N-1:
                    c = dp[i-1][j+1]
                
                dp[i][j] = Matrix[i][j] + max(a, b, c)
        
        
        ans = -1
        
        for i in range(N):
            ans = max(ans, dp[N-1][i])
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        arr = input().split()
        Matrix = [[0]*N for i in range(N)]
        for itr in range(N*N):
            Matrix[(itr//N)][itr%N] = int(arr[itr])
        
        ob = Solution()
        print(ob.maximumPath(N, Matrix))

# } Driver Code Ends