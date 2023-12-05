#User function Template for python3

class Solution:    
    def countX(self, L, R, X):
        #code here
        def findd(n, x):
            ans  = 0
            while n > 0 :
                if n % 10 == x:
                    ans += 1
            
                n //= 10
            return ans
        
        ans = 0
        
        L += 1
        
        while L < R:
            ans += findd(L, X)
            L += 1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        L,R,X=map(int,input().strip().split(" "))
        ob=Solution()
        ans=ob.countX(L,R,X)
        print(ans) 
# } Driver Code Ends