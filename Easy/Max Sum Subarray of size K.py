#User function Template for python3
class Solution:
    def maximumSumSubarray (self, K, Arr, N):
        # code here
        sum  = 0
        
        if (K >= N):
            for it in Arr:
                sum += it
            return sum
        
        for i in range(K):
            sum += Arr[i]
            
        ans = sum
        
        for i in range(K, N):
            sum -= Arr[i-K]
            sum += Arr[i]
            ans = max(ans, sum)
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        N,K = input().split()
        N = int(N)
        K = int(K)
        Arr = list( map(int,input().strip().split(" ")))

        ob = Solution()
        print(ob.maximumSumSubarray(K,Arr,N))
# } Driver Code Ends