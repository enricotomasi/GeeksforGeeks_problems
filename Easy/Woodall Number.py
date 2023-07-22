#User function Template for python3

class Solution:
    def isWoodall(self, N):
        # code here
        woo = 0
        cnt = 1
        
        while woo < N:
            woo = cnt * pow(2, cnt) -1
            if N == woo:
                return 1
            cnt += 1
        
        return 0


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.isWoodall(N))
# } Driver Code Ends