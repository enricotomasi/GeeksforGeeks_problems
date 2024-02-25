#User function Template for python3
import math

class Solution:
    def largestPrimeFactor (self, N):
        # code here
        ans = -1
        
        while N % 2 == 0:
            ans = 2
            N //= 2
         
        for i in range(3, int(math.sqrt(N)) + 1, 2):
            while N % i == 0:
                ans = i
                N //= i
                 
        if N > 2:
            ans = N
            
        return ans
                
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
       

        ob = Solution()
        print(ob.largestPrimeFactor(N))
# } Driver Code Ends