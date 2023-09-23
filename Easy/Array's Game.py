#User function Template for python3

class Solution:
    def arrayGame(self, N, A):
        #code here
        m = max(A)
        diff = 0
        
        for it in A:
            diff += m -it
        
        if diff == 0:
            return "Draw"
        
        if diff %2 == 0:
            return "Second"
        
        return "First"
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
    
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        A=list(map(int,input().strip().split()))
        ob=Solution()
        print(ob.arrayGame(N,A))
# } Driver Code Ends