#User function Template for python3
import math

class Solution:
    def rooms(self, N, M):
        # code here
        mcd = math.gcd(N, M)
        
        return (N + M) // mcd



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, M = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.rooms(N, M))
# } Driver Code Ends