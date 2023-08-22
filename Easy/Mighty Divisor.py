#User function Template for python3
import math

def lcm(a, b, c):
    temp = ((a *b) // (math.gcd(a, b)))
    return ((c * temp) // math.gcd(temp, c))

class Solution:
    def minNumber(self, X, Y, Z, N):
        # code here
        
        massimo = pow(10, N-1)
        lc = lcm(X, Y, Z)
        rem = massimo % lc
        
        if rem == 0:
            return massimo
        
        if lc > pow(10, N):
            return -1
        
        return massimo + (lc-rem)
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        arr = input().split()
        X = int(arr[0])
        Y = int(arr[1])
        Z = int(arr[2])
        N = int(arr[3])

        ob = Solution()
        print(ob.minNumber(X, Y, Z, N))

# } Driver Code Ends