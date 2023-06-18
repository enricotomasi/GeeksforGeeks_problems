#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def maxChildren(self, N, M, greed, sz):
        # Code here
        ans = 0
        M -= N
        
        greed.sort()
        sz.sort()
        j = 0
        
        for i in sz:
            #print(i, greed[j])
            if j >= N:
                break
            if i >= greed[j]:
                ans += 1
            else:
                continue
            j += 1
        
        
        return ans
        

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        N, M = list(map(int, input().split()))
        greed = list(map(int, input().split()))
        sz = list(map(int, input().split()))
        ob = Solution()
        res = ob.maxChildren(N, M, greed, sz)
        print(res)
# } Driver Code Ends