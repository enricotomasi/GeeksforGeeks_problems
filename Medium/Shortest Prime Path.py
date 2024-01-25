#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3
import math

class Solution:
    def solve (self, Num1, Num2):
        #code here
        if Num1 == Num2:
            return 0
        
        sieve = [True] * 10000
        
        for i in range(2, int(math.sqrt(10000))):
            for j in range(i*i, 10000, i):
                sieve[j] = False
        
        primes = dict()
        
        for i in range(1000, 10000):
            if sieve[i] is True:
                primes[i] = 0
        
        q = [(Num1, 0)]
        
        v = [True] * 10000
        
        while q:
            p = q[0]
            q.pop(0)
            
            for i in range(1, 10):
                for j in [1, 10, 100, 1000]:
                    n = p[0] + i * j
                    
                    jt = j * 10
                    
                    if p[0] % (jt) > n % (jt):
                        n -= jt
                    
                    k = p[1] + 1
                    
                    if n in primes:
                        if n == Num2:
                            return k
                        elif v[n]:
                            v[n] = False
                            q.append((n, k))
        
        return -1



        
        
        
            
        



#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        Num1,Num2=map(int,input().split())
        ob = Solution()
        print(ob.solve(Num1,Num2))
# } Driver Code Ends
