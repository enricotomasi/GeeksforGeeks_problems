
class Solution:
    def findNthNum(self, N):
        # code here
        m = 1000000007
        
        return (2 ** N + 3 ** N+1) %m


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.findNthNum(N))
# } Driver Code Ends