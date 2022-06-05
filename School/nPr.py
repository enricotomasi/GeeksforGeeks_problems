 
#User function Template for python3
import math

class Solution:
    def nPr(self, n, r):
        # code here
        
        ans = math.factorial(n) / math.factorial(n-r)
        return math.floor(ans)
        
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, r = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.nPr(n, r))
# } Driver Code Ends