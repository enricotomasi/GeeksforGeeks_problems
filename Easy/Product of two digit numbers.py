#User function Template for python3

class Solution:
    def prodTwoDigit(self, N):
        # code here 
        m = 1000000007
        ans = 1
        
        if N == 0:
            return 0
            
        while N > 0:
            blocco = N % 100
            N //= 100
            ans = (ans * blocco) %m

        return ans %m

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.prodTwoDigit(N))
# } Driver Code Ends