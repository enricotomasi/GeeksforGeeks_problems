#User function Template for python3
import math

def primo(n):
    if n == 1 or n % 2 == 0:
        return False
    
    if n == 3:
        return True
    
    for i in range(3, int(math.sqrt(n))+1, 2):
        if n % i == 0:
            return False
    
    return True

class Solution:
    def damonPrime (self, N):
        # code here 

        if primo(N-1) and primo(N+1):
            return "Yes"
            
        return "No"

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        
        ob = Solution()
        print(ob.damonPrime(N))
# } Driver Code Ends