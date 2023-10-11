#User function Template for python3
import math

class Solution:
    def findMinValue(self, a, n):
        #code here.
        eps = 1e-15
        somma = 0
        
        for i in range(n):
            somma += math.log10(a[i]) + eps
        
        xl = somma / n + eps
        
        ans = pow(10, xl) + eps
        
        return math.ceil(ans + eps);

#{ 
 # Driver Code Starts
#Initial Template for Python 3



t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    ob = Solution()
    print(ob.findMinValue(a,n))




# } Driver Code Ends