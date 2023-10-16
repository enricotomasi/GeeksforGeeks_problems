#User function Template for python3
import sys

class Solution:
    def getMinCost(self , arr):
        # code here 
        ans = sys.maxsize
        
        for i in range(26):
            c = 0
            for j in range(26):
                c += arr[j] * abs(i-j)
            ans = min(ans, c)
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.getMinCost(arr))
# } Driver Code Ends