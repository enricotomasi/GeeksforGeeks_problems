#User function Template for python3
import math

def div(n):
    ans = 0
    for i in range(1, int(math.sqrt(n))+1):
        if n % i == 0:
           ans += 1
           if n // i != i:
               ans += 1
    return ans        

def esp(n):
    ans = []
    
    fp = {}
    
    for i in range(2, int(math.sqrt(n)+1)):
        while n % i == 0:
            if i in fp:
                fp[i] += 1
            else:
                fp[i] = 1
            
            n //= i
    
    if n >= 2:
        fp[n] = 1
    
    for it in fp:
        ans += [fp[it]]
    
    ans.sort()
    return ans

class Solution:
    def orderedPrime(self, n):
        # code here
        divisori = div(n)
        esponenti = esp(n)
        
        
        return esponenti + [divisori]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        
        ob = Solution()
        ans = ob.orderedPrime(n)
        for i in range(len(ans)-1):
            print(ans[i],end=" ")
        print()
        print(ans[len(ans)-1])
# } Driver Code Ends