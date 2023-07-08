#User function Template for python3

class Solution:
    def series(self, n):
        # Code here
        if n == 0: 
            return [0]
        
        ans = [0, 1]
        
        for i in range(n-1):
            fibo = ans[i] + ans[i+1]
            ans += [fibo]
      
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        result = ob.series(N)
        print(*result)
# } Driver Code Ends