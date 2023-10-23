#User function Template for python3

class Solution:
    def TimeComplexity(self, n):
        # Code here
        if n == 1:
            print("logn")
        elif n == 2:
            print("nlogn")
        else:
            print("n^2")



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ob.TimeComplexity(N)
# } Driver Code Ends