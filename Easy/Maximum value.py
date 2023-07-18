#User function Template for python3
import sys

class Solution:
    def findMaxValue(self, arr, n):
        # code here 
        if (n < 4):
            return -1
        
        a = arr[0] * -1
        b = arr[1] - arr[0]
        c = arr[1] - arr[0] - arr[2]
        ans = arr[1] - arr[0] - arr[2] + arr [3]
        
        for i in range(4, n):
            a = max(a, arr[i-3] * - 1)
            b = max(b, a + arr[i-2])
            c = max(c, b - arr[i-1])
            ans = max(ans, c + arr[i])
        
        return ans
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():
    T = int(input())
    while(T > 0):
        n = int(input())
        arr = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.findMaxValue(arr, n))
        T -= 1


if __name__ == "__main__":
    main()







# } Driver Code Ends