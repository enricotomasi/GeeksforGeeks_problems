#User function Template for python3

class Solution:
    def maxSquares(self, B):
        # code here
        temp = (B // 2) - 1
        return temp * (temp + 1) // 2


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        B=int(input())
        
        ob = Solution()
        print(ob.maxSquares(B))
# } Driver Code Ends