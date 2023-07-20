#User function Template for python3
m = 1000000007


class Solution:
    def getNthPell(self, N):
        # code here
        if (N == 1):
            return 1
        
        if (N == 2):
            return 2
        
        a = 0
        b = 1
        pell = 2
        
        for i in range(1, N):
            pell = ((2 * b) + a) % m
            a = b
            b = pell
        
        return pell
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.getNthPell(N))
# } Driver Code Ends