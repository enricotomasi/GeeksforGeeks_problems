#User function Template for python3
import math

class Solution:
    def noOfDays(self, R, S, Q):
        # code here
        return math.ceil((Q-S) / (R-S))



#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        R,S,Q=map(int,input().split())
        
        ob = Solution()
        print(ob.noOfDays(R,S,Q))
# } Driver Code Ends