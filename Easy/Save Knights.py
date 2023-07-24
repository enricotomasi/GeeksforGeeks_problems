#User function Template for python3
import math

class Solution:
    def saveKnights(self, n):
        # code here 
        if n == 2:
            return 4
        
        return int((math.pow(n, 2) + 1) /2)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n=int(input())
        
        ob = Solution()
        print(ob.saveKnights(n))
# } Driver Code Ends