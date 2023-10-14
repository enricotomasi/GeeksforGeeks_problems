#User function Template for python3
class Solution:
    def mapStr (ob, N):
        # code here 
        m = 1000000007
        
        ans = 1
        
        for i in range(N, 0, -1):
            ans = (ans * i) % m
        
        return ans % m


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = input()
        N = int(N)
        
        ob = Solution()
        print(ob.mapStr(N))
# } Driver Code Ends