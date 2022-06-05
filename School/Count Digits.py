 
#User function Template for python3
import math

class Solution:
    def evenlyDivides (self, N):
        # code here
        numero = N
        ans = 0
        while numero > 0 :
            cifra = numero % 10
            if cifra != 0 and N%cifra == 0 : ans+=1
            numero = math.floor(numero/10)
        return ans
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
       

        ob = Solution()
        print(ob.evenlyDivides(N))
# } Driver Code Ends