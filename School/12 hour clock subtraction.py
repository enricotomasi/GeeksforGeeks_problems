 
#User function Template for python3
import math

class Solution:
    def subClock(self, num1, num2):
        # code here
        
        sott = num2-num1;
        clo = 12 - (sott % 12)
        if clo == 12: clo = 0
        return clo

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        num1,num2=map(int,input().split())
        
        ob = Solution()
        print(ob.subClock(num1,num2))
# } Driver Code Ends