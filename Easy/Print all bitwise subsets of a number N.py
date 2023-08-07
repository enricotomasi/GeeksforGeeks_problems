#User function Template for python3

class Solution:
    def printSubsets (self, N):
        pass
        # code here
        
        ans = []
        
        for i in range(N, -1, -1):
            if i & N == i:
                ans += [i]

        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3


        

if __name__ == '__main__': 
    ob = Solution()
    t = int (input ())
    for _ in range (t):
        N = int(input())
        print(*ob.printSubsets(N))




# } Driver Code Ends