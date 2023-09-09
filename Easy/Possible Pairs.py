#User function Template for python3
import math

class Solution:
    def pairCount(self, x, y):
        # code here
        target = x * y
        ans = 0
        i = 1
        
        while (i * i) < target:
            if target % i == 0:
                if math.gcd(i, target // i) == x:
                    ans += 2
            i += 1
        
        if target % i == 0:
            if math.gcd(i, target // i) == x and i == target // i:
                ans +=1
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        x, y = [int(a) for a in input().split()]
        
        ob = Solution()
        print(ob.pairCount(x, y))
# } Driver Code Ends