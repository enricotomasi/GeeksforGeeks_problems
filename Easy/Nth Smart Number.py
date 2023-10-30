#User function Template for python3
import math

m = 100001
spf = [0 for i in range(m)]

def primes(n):
    ans = 0
    l = []
    
    while n != 1:
       if spf[n] not in l:
           l.append(spf[n])
           ans +=1
       
       n //= spf[n]
    
    return ans

class Solution:
    def nthSmartNum(self, n):
        # code here 
        spf[1] = 1
        
        for i in range(2, m):
            spf[i] = i
 
        for i in range(4, m, 2):
            spf[i] = 2
     
        for i in range(3, math.ceil(math.sqrt(m))):
            if (spf[i] == i):

                for j in range(i * i, m, i): 
                    if (spf[j] == j):
                        spf[j] = i

        ans = -1
        i = 30
        
        while n > 0:
            if primes(i) >= 3:
                ans = i
                n -= 1 
            i+= 1
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n=int(input())
        
        ob = Solution()
        print(ob.nthSmartNum(n))
# } Driver Code Ends