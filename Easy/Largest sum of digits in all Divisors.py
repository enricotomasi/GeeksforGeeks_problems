#User function Template for python3
import math

def sumDigits(n):
    ans = 0
    
    while n > 0:
        ans += n % 10
        n //= 10
    
    return ans

class Solution:
    def getLargest(self, n):
        # code here 
        ans = 1
        
        for i in range (2, int(math.sqrt(n)+1)):
            if n % i == 0:
                #print(i, n // i, "  ****  ", sumDigits(i), sumDigits(n//i))
                ans = max(ans, max(sumDigits(i), sumDigits(n//i)))
        
        return max(ans, sumDigits(n))


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n=int(input())
        
        ob = Solution()
        print(ob.getLargest(n))
# } Driver Code Ends