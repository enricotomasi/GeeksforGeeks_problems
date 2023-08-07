#User function Template for python3

class Solution:
    def expectedValue(self, N , K , A):
        #code here
        tot = 0
        
        for it in A:
            tot += it
        
        return (N * tot) // K
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N, K = map(int,input().strip().split())
        A = list(map(int,input().strip().split()))
        ob=Solution()
        print(ob.expectedValue(N ,K ,A))
# } Driver Code Ends