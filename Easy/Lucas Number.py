#User function Template for python3

class Solution:
    def lucas(self, n):
        # code here 
        m = 1000000007
        
        l0 = 2
        l1 = 1
        
        if (n == 0): return l0;
        if (n == 1): return l1;
        
        ans = 3
        
        for i in range(1, n):
            ans = (l0 + l1) %m
            l0 = l1 %m
            l1 = ans %m
    
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n = int(input())
        ob = Solution()
        print(ob.lucas(n))
# } Driver Code Ends