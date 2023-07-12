#User function Template for python3
import math

class Solution:
    def repUnit(self, N):
        # code here
        m = 11 % N
        
        for ans in range(3, 1000001):
            #print(rep)
            m = (m * 10 + 1) % N
            if m == 0:
                return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.repUnit(N))
# } Driver Code Ends