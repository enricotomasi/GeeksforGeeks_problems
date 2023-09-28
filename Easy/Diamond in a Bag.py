#User function Template for python3

class Solution:
    def minScale(self, N):
        # code here
        if N == 1:
            return 0
            
        if N >=2 and N <= 3:
            return 1
            
        ans = 0
        prod = 1
        
        while prod < N:
            ans += 1
            prod *= 3
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.minScale(N))
# } Driver Code Ends