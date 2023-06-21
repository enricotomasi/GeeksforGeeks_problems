#User function Template for python3

class Solution:
    def maxSum(self, N):
        # code here
        ans = (N * (N/2)) -1;
        
    
        return int(ans);

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.maxSum(N))
# } Driver Code Ends