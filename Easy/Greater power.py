#User function Template for python3
import math

class Solution:
    def greaterPower(self, a, b, m, n):
        # code here 
        primo = 0
        secondo = 0
        
        if b != 0:
            primo = b *  math.log(a)
        else:
            primo = 1
            
        if n != 0:
            secondo = n * math.log(m)
        else:
            secondo = 1
            
        if primo > secondo:
            return 1
        elif primo < secondo:
            return 0
            
        return -1
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        a,b,m,n=map(int,input().split())
        
        ob = Solution()
        print(ob.greaterPower(a,b,m,n))
# } Driver Code Ends