#User function Template for python3
import math

class Solution:
    def getSmallestDivNum(self, n): 
        # code here 
        numero = 1
        for i in range(2,n+1):
            numero = (numero*i)//math.gcd(numero,i)
        return numero
        
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t=int(input())
    for tcs in range(t):
        n=int(input())
        ob = Solution()
        print(ob.getSmallestDivNum(n))
# } Driver Code Ends