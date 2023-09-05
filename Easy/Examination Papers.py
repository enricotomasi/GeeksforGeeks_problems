#User function Template for python3

#User function Template for python3
class Solution:
    def totalMoves (self, N):
        # code here 
        return pow(2, N) - 1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        
        ob = Solution()
        print(ob.totalMoves(N))
# } Driver Code Ends