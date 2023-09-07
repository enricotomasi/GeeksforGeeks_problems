#User function Template for python3
def ric(a, b, m):
    ans = 1
    while b > 0:
        if b % 2 != 0:
            ans = (ans * a) %m
        a = (a * a) % m
        b >>= 1
    return ans
        

class Solution:
    def geoProg(self, N):
        # code here
        m = 1000000007
        
        temp = ric(2, N, m-1)
        
        return ric(2, temp, m) - 1
    
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.geoProg(N))
# } Driver Code Ends