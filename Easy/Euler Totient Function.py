#User function Template for python3
import math

class Solution:
    def ETF (self, N):
        # code here
        ans = N
        
        for i in range(2, int(math.sqrt(N)+1)):
           if (N % i == 0):
               ans //= i
               ans *= i-1
               
               while N % i == 0:
                   N //= i
            
        if N > 1:
            ans //=N
            ans *= (N-1)
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        ob = Solution()
        print(ob.ETF(N))
# } Driver Code Ends