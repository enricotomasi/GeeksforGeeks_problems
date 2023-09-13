#User function Template for python3

class Solution:
    def numOfPrisoners(self, N):
        # code here
        if N <= 1:
            return 0
        elif N == 2:
            return 1 
        
        ans = 1
        pot = 2
        
        while True:
            pot *= 2
            ans += 1
            
            if pot >= N:
                return ans
#{ 
 # Driver Code Starts
#Initial Template for Python 3
import math

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.numOfPrisoners(N))
# } Driver Code Ends