#User function Template for python3

class Solution:
    def NthTermOfSeries(self, N):
    	#code here
        if N <= 0:
            return 0
        
        if N % 2 == 1:
            return 10 * Solution.NthTermOfSeries(self, (N - 1) //2 ) + 4
        
        return 10 * Solution.NthTermOfSeries(self, (N-1) // 2) + 7

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ans = ob.NthTermOfSeries(N)
        print(ans)
# } Driver Code Ends