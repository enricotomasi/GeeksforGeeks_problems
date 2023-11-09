#User function Template for python3

class Solution:
    def findNoOfEdges(self, c, f):
        # code here 
        nc = len(c)
        nf = len(f)
        
        a = int(c[nc - 1])
        b = int(f[nf - 1])
        
        ans = (a + b - 2) % 10
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        C,F = map(str,input().split())
        
        ob = Solution()
        print(ob.findNoOfEdges(C,F))
# } Driver Code Ends