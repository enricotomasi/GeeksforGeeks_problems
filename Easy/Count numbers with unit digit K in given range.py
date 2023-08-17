#User function Template for python3
import math

class Solution:
    def countLastDigitK(self, low, high, K):
        # code here
        ml = int(10 * math.ceil(low/10))
        mh = int(10 * math.floor(high /10))
        
        ans = (mh - ml) // 10
        
        if high % 10 >= K:
            ans +=1
        
        if low % 10 <= K and low % 10 > 0:
            ans +=1
        
        return ans
        
        
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        low,high,K=map(int,input().split())
        
        ob = Solution()
        print(ob.countLastDigitK(low,high,K))
# } Driver Code Ends