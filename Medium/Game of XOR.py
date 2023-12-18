#User function Template for python3

class Solution:
    def gameOfXor(self, N , A):
        # code here 
        if N % 2 == 0:
            return 0;
        
        if N == 1:
            return A[0];
        
        ans = 0;
        
        for i in range(0, N, 2):
            ans ^= A[i];

        
        return ans;


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        A=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.gameOfXor(N,A))
# } Driver Code Ends
