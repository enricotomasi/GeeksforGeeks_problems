#User function Template for python3
import sys

class Solution:
    def printClosest (self, arr, brr, n, m, x) : 
        #code here
        a = 0
        b = m - 1
        
        ans = []
        
        diff = sys.maxsize
        
        while a < n and b > -1:

            somma = arr[a] + brr[b]
        
            if abs(somma - x) < diff:
                diff = abs(somma - x)
                ans = [arr[a], brr[b]]
        
            if somma < x:
                a += 1
            elif somma > x:
                b -= 1
            else:
                break
        
        return ans
#{ 
 # Driver Code Starts
#Initial Template for Python 3

for _ in range(0,int(input())):
    n, m = map(int, input().split())
    arr = list(map(int, input().strip().split()))
    brr = list(map(int, input().strip().split()))
    x = int(input())
    ob = Solution()
    ans = ob.printClosest(arr, brr, n, m, x)
    print(abs(ans[0]+ans[1] - x))
# } Driver Code Ends