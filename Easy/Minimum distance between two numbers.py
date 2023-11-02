import sys

class Solution:
    def minDist(self, arr, n, x, y):
        temp = -1
        ans = sys.maxsize
        
        for i in range(n):
            if arr[i] == x or arr[i] == y:
                if temp != -1 and arr[i] != arr[temp]:
                    ans = min(ans, i - temp)
                temp = i
        
        if ans == sys.maxsize:
            return -1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        x,y = list(map(int, input().strip().split()))
        print(Solution().minDist(arr, n, x, y))



# } Driver Code Ends