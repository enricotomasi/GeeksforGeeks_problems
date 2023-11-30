#User function Template for python3

class Solution:
    def nCr(self, n, r):
        # code here
        # n! / r!(n-r)!
        m = 1000000007
        if r > n:
            return 0
        
        elif r == 1:
            return 1
        
        else:
            a = 1
            for i in range(1, r + 1):
                a *= n
                n -= 1
        
            b = 1
            for i in range(1, r + 1):
                b *= i 
        
        return (a // b) % m
#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, r = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.nCr(n, r))
# } Driver Code Ends