class Solution:
    def mergeSort(self, arr, l, r, mid):
        left = arr[l : mid + 1]
        right = arr[mid + 1 : r + 1]
        
        ans = 0
        lc = 0
        lr = 0
        c = l
        
        while lc < len(left) and lr < len(right):
            if left[lc] <= right[lr]:
                arr[c] = left[lc]
                lc += 1
                c += 1
            else:
                arr[c] = right[lr]
                lr += 1
                c += 1
                ans += len(left) - lc
        
        while lc < len(left):
            arr[c] = left[lc]
            lc += 1
            c += 1
            
        while lr < len(right):
            arr[c] = right[lr]
            lr += 1
            c += 1
            
        return ans
    
    def mergeCount(self, arr, l, r):
        ans = 0
        if l < r:
            mid = (l + r) // 2
            ans += self.mergeCount(arr, l, mid)
            ans += self.mergeCount(arr, mid + 1, r)
            ans += self.mergeSort(arr, l, r, mid)
        return ans
            
    
    def inversionCount(self, arr, n):
        # Your Code Here
        return self.mergeCount(arr,0, (n - 1))



#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__=='__main__':
    t = int(input())
    for tt in range(t):
        n = int(input())
        a = list(map(int, input().strip().split()))
        obj = Solution()
        print(obj.inversionCount(a,n))
# } Driver Code Ends
