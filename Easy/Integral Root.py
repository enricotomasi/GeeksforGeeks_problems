#User function Template for python3
import math

class Solution:
    def integralRoot(self, N, K):
        # code here
        return int(math.pow(N+1, K)) - int(math.pow(N, K))

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, K = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.integralRoot(N, K))
# } Driver Code Ends