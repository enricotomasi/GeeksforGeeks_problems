#User function Template for python3

class Solution:
    def height(self, N):
        # code here
        togli = 1
        ans = 0
        
        while N-togli >= 0:
            N -= togli
            togli += 1
            ans += 1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.height(N))
# } Driver Code Ends