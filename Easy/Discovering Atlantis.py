#User function Template for python3

class Solution:
    def captain(self, N):
        # code here
        if N % 3 == 0:
            return "JACK"
        
        return "JELLY"


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.captain(N))
# } Driver Code Ends