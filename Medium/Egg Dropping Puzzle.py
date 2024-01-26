#User function Template for python3

class Solution:
    
    #Function to find minimum number of attempts needed in 
    #order to find the critical floor.
    def eggDrop(self, n, k):
        # code here
        dp = [0] * (n + 1)
        
        ans = 0
        
        while dp[n] < k:
            ans += 1
            for i in range(n, 0, -1):
                dp[i] += 1 + dp[i - 1]

        return ans
        
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

# Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        n,k = map(int,input().strip().split())
        ob=Solution()
        print(ob.eggDrop(n,k))
# } Driver Code Ends
