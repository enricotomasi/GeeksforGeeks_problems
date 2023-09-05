#User function Template for python3
import math



class Solution:
    def maxNatural(self, M):
        # code here
        n = M
        ans = 0
        
        for i in range(1, M+1):
            cifre = len(str(i))
            if cifre <= n:
                n -= cifre
                ans += 1
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        M = int(input())
        
        ob = Solution()
        print(ob.maxNatural(M))
# } Driver Code Ends