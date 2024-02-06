#User function Template for python3
from functools import cmp_to_key

class Solution:
    def cmp(self, a, b):
        if a + b > b + a:
            return -1
        return 1

    def printLargest(self,arr):
        # code here
        for it in enumerate(arr):
            arr[it[0]] = str(it[1])
    
        arr = sorted(arr, key = cmp_to_key(self.cmp))
    
        ans = ""
        
        for it in arr:
            ans += str(it)

        return ans
    

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import functools

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(str, input().strip().split()))
        ob = Solution()
        ans = ob.printLargest(arr)
        print(ans)
        tc -= 1

# } Driver Code Ends
