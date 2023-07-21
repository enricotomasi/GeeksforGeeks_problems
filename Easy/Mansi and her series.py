#User function Template for python3
import math

class Solution:
    def nthTerm (self, n):
        # code here 
        k = 60002
        
        sieve = [False, False]
        sieve += [True] * k
        
        for i in range(2, int(math.sqrt(k))):
            if sieve[i] == True:
                for j in range (i*i, k, i):
                    sieve[j] = False
        
        primi = []
        
        for i in range(k):
            if sieve[i] == True:
                primi += [i]
        
        #print(primi)
        
        return n * (primi[n-1]+1)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.nthTerm(n))
# } Driver Code Ends