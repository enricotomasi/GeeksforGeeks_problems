#User function Template for python3
import math

class Solution:
    def numberOfHeads(self, N):
        #code here
        return (int)(math.sqrt(N))
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        print(ob.numberOfHeads(N))
# } Driver Code Ends