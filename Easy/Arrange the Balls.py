#User function Template for python3
import math

class Solution:
    def numberOfWays (self, N):
        # code here
        return (((N) * (N - 1)) // 2) + (3 + (2 * (N - 1)))

        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        N=int(input())

        ob = Solution()
        print(ob.numberOfWays(N))
# } Driver Code Ends