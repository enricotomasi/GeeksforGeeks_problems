#User function Template for python3
m = 1000000007

class Solution:
    def modifiedSum(self, N, M, K):
        #code here
        ans = 0
        temp = N + K
        
        for i in range(M):
            ans = (temp * (temp +1)) % m
            temp = ans + K
        
        return ans
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N,M,K=map(int,input().strip().split(" "))
        ob=Solution()
        print(ob.modifiedSum(N,M,K))
# } Driver Code Ends