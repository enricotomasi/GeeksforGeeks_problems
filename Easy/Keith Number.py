#User function Template for python3
import math
from collections import deque

class Solution:
    def isKeith (self, n):
        # code here 
        cifre = int(math.log10(n)) + 1
        
        q = deque()
        
        temp = n
        
        for i in range(cifre):
            digit = temp % 10
            
            if digit == n:
                return 1
            
            q.append(digit)
            temp //= 10
        
        q.reverse()
        
        #print(q)
        
        c = 0
        
        while c <= n:
            if c == n:
                return 1
            somma = sum(q)
            c = somma
            #print(c)
            q.popleft()
            q.append(somma)
            #print(q, "\n")
    
        return 0
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.isKeith(n))
# } Driver Code Ends