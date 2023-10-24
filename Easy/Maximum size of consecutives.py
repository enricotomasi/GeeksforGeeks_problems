#User function Template for python3


class Solution:
    def maximiseSubset(self, arr, n, k):
        # code here
        ans = k
        
        l = 0
        r = 0
        
        while r < n:
            while arr[r] - arr[l] - (r - l) > k:
                l += 1
            ans = max(ans, r - l + k + 1)
            r += 1
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3




if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, k = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))

        ans = Solution().maximiseSubset(arr, n, k)
        print(ans)
        tc -= 1

# } Driver Code Ends