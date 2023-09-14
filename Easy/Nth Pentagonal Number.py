#User function Template for python3

class Solution:
    def getNthPentagonalNum(self, n):
        # code here
        return n * (n * 3 - 1) // 2


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n=int(input())
        
        ob = Solution()
        print(ob.getNthPentagonalNum(n))
# } Driver Code Ends