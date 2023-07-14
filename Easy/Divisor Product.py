#User function Template for python3
import math

class Solution:
    def divisorProduct(self, N):
        # code here
        ans = 1
        m = 1000000007
        
        for i in range(1, int(math.sqrt(N) + 1)):
            if N % i == 0:
                ans = (ans * i) %m
                if N // i != i:
                    ans = (ans * (N//i))%m
        
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
        print(ob.divisorProduct(N))
# } Driver Code Ends