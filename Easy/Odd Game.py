#User function Template for python3

class Solution:
    def oddGame(self, N):
        # code here
        pot = 1
        last = 1
        
        while True:
            el = pow(2, pot)
            if el == N:
                return el
            elif el > N:
                return last
                
            pot +=1
            last = el
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import math

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.oddGame(N))
# } Driver Code Ends