#User function Template for python3

class Solution:
    def count(self, n: int) -> int:
        #your code here
        dp = [0] * (n + 1)
        dp[0] = 1
        
        for i in range(3):
            for j in range(n+1):
                if i == 0 and j-3 >= 0:
                    dp[j] += dp[j-3]
                elif i == 1 and j-5 >= 0:
                    dp[j] += dp[j-5]
                elif i == 2 and j-10 >= 0:
                    dp[j] += dp[j-10]
        
        return dp[n]
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    for _ in range(int(input())):
        n = int(input())
        ob = Solution()
        print(ob.count(n))
        
# } Driver Code Ends