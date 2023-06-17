#User function Template for python3
import math
class Solution:
    def productOfPairs(self, N, A):
        #code here
        m = int(pow(10, 9)) + 7;
        
        ans = 0
        somma = 0
        
        for i in A:
            somma += i
            
        for i in A:
            somma -= i;
            ans = ans + (i * somma) %m
        
        return ans %m

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=(int)(input())
        A=list(map(int,input().strip().split(" ")))
        ob=Solution()
        print(ob.productOfPairs(N,A))
# } Driver Code Ends