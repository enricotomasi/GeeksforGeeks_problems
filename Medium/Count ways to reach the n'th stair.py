#User function Template for python3
class Solution:
    #Function to count number of ways to reach the nth stair.
    def countWays(self, n):
        # code here
        if n <= 2:
            return n
            
        m = 1000000007
        
        a = 1
        b = 2
        ans = 3
        
        for i in range(3, n + 1):
            ans = a + b % m
            a = b
            b = ans
            
        
        return ans % m


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys
sys.setrecursionlimit(10**6)

# Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        m = int(input())
        ob=Solution()
        print(ob.countWays(m))

# } Driver Code Ends