#User function template for Python

class Solution:
    def rectanglesInCircle(self, R):
        #code here
        ans = 0

        d = 2 * R
        ds = d * d

        for i in range(1, 2 * R): 
            for j in range(1, 2 * R):

                dls = i * i + j * j
                if dls <= ds:
                    ans += 1
        
        return ans
    


#{ 
 # Driver Code Starts
#Initial Template for Python

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        ans=ob.rectanglesInCircle(N)
        print(ans)
# } Driver Code Ends