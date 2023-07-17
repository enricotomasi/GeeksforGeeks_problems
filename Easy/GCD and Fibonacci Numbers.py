#User function Template for python3
import math


def fibo(n):
    if n == 0:
        return 0
    a = 0
    b = 1
    fibo = 1
    
    for i in range(n-1):
        fibo = (a % 100 + b % 100) % 100
        a = b 
        b = fibo
    
    return fibo


class Solution:
    def fibGcd (self, M, N):
        #complete the function here
        mcd = math.gcd(M, N)
        
        return fibo(mcd) % 100
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        m, n = map(int,input().split())
        ob = Solution()
        print(ob.fibGcd(m, n))
# } Driver Code Ends