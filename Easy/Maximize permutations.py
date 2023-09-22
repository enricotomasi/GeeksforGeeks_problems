#User function Template for python3
from itertools import permutations

class Solution:
    def maxPerm(self, N, M):
        # code here
        ans = -1

        s = str(N)
        
        perms = [''.join(p) for p in permutations(s)]
        
        for it in perms:
            #print(it)
            num = int(it)
            if num <= M:
                ans = max(ans, num)
            
        return ans
        
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,M=map(int,input().split())
        
        ob = Solution()
        print(ob.maxPerm(N,M))
# } Driver Code Ends