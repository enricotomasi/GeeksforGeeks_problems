#User function Template for python3

class Solution:
    def lenOfLongSubarr (self, arr, n, k) : 
        #Complete the function
        ans = 0
        curr = 0 
        sums = dict()
        
        for i in range(n):
            curr += arr[i]
            
            if curr == k:
                ans = max(ans, i+1)
            rem = curr - k
            
            if rem in sums:
                ans = max(ans, i - sums[rem])
            
            if curr not in sums:
                sums[curr] = i
        
        return ans
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n, k = map(int , input().split())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    print(ob.lenOfLongSubarr(arr, n, k))




# } Driver Code Ends
