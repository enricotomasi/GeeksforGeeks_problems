#User function Template for python3

class Solution:
    def modifiedFib(self, N, A, B, C):
        # code here
        m = 1000000007
        f1 = A + B
        f2 = B + C
        
        if N == 1:
            return f1
            
        if N == 2:
            return f2
        
        mf = 0
        modfibo = [f1, f2]
        
        for i in range(3, 7):
            mf = (f2 - f1) %m
            modfibo += [mf]
            f1 = f2
            f2 = mf

        #print(modfibo)
        
        ans = 0
        
        if N < 7:
            ans = modfibo[N - 1]
        else:
            ans = modfibo[(N-1) % 6]
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, A, B, C = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.modifiedFib(N, A, B, C))
# } Driver Code Ends