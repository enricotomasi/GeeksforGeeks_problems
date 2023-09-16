#User function Template for python3
import math

class Solution:
    def count (self, N):
        #complete the function here
        if N % 2 != 0:
            return 0
        
        return math.ceil(N/4) - 1

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        ob = Solution()
        print(ob.count(n))
# } Driver Code Ends