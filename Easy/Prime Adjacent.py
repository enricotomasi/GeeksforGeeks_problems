#User function Template for python3
import math

def primo(n):
    if n == 1:
        return False
    
    if n % 2 == 0:
        return False
    
    for i in range(3, int(math.sqrt(n)+1), 2):
        if n % i == 0:
            return False
    
    return True
        
class Solution:
    def primeAdjacent(self, N):
        # code here
        if primo(N-1) and primo(N+1):
            return 1
            
        return 0

        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        if(ob.primeAdjacent(N) == 1):
            print("Y")
        else:
            print("N")
# } Driver Code Ends