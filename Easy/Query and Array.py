#User function Template for python3
import sys

class Solution:
    def findX(self, arr, n, q):
        # code here
        
        ans = -1
        minDiff = sys.maxsize
        
        for it in arr:
          diff = bin(it ^ q).count("1")
          
          if (diff < minDiff) or (diff == minDiff and it < ans):
              #print(it, q, " ---- ", diff, minDiff)
              minDiff = diff
              ans = it
        
        return ans
        
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3





if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, q = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))

        ans = Solution().findX(arr, n, q)
        print(ans)
        tc -= 1

# } Driver Code Ends