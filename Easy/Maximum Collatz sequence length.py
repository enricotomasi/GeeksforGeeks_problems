#User function Template for python3

class Solution:
    def collatzLength(self, N):
        # code here
        if (N == 3):
            return 8
            
        dp = [0] * (N + 1)
        ans = 1
        
        dp[1] = 1
        
        for i in range(2, N):
            conta = 0
            temp = i
            dp[i] = 1
            
            while temp >= i:
                conta +=1
                
                if temp %2 == 0:
                    temp //= 2
                else:
                    temp *= 3
                    temp += 1
                    
            dp[i] = max(dp[i], conta+dp[temp])
            ans = max(ans, dp[i])
            
        return ans 
                
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.collatzLength(N))
# } Driver Code Ends