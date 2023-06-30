#User function Template for python3
import math




class Solution:
    def largestPowerOfPrime(self, N, p):
        # code here 
        ans = 0
        temp = p
        count = 0
        
        while temp <= N:
            ans = ans + N // temp
            temp = temp * p
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,p=map(int,input().split())
        
        ob = Solution()
        print(ob.largestPowerOfPrime(N,p))
# } Driver Code Ends