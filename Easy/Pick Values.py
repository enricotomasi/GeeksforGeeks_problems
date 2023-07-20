#User function Template for python3
import sys

class Solution:
    def pickValues(self, arr, n):
        
        for i in range(4, n):
            arr[i] += min(arr[i-4:i])
        
        return min(arr[-4:])
        
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.pickValues(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends